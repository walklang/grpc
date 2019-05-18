// server.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "grpc++/grpc++.h"
#include "protos/client.grpc.pb.h"

class Server : public window::Window::Service {
public:
    Server() {}

    virtual ::grpc::Status MoveWindow(::grpc::ServerContext* context, const ::window::MoveMessage* request, ::window::ResponseMessage* response) override {
        HWND win = (HWND)request->hwnd();
        auto left = request->left();
        auto top = request->top();
        auto width = request->width();
        auto height = request->height();
        auto repaint = request->repaint();

        std::cout << "MoveWindow: " << win << ", " << left << ", " << top << ", " << width << ", " << height << std::endl;

        ::MoveWindow(win, left, top, width, height, repaint);
        response->set_result(1000);
        std::cout << "Move Ending." << std::endl;

        return grpc::Status::OK;
    }
};


int main() {
    std::cout << "Hello World!\n";

    std::string address("0.0.0.0:50051");
    std::cout << "server listening on: " << address << "\n";

    Server server;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(&server);

    std::unique_ptr<grpc::Server> grpc_server(builder.BuildAndStart());
    std::cout << "server on ..." << std::endl;

    grpc_server->Wait();

    return 0;
}
