# GRPC实例教程

本demo使用GRPC实现在windows系统上，32位进程和64位进程的交互。

# Google Protocol Buffer


```
#生成PB文件
.\protoc.exe -I .\ --cpp_out=. client.proto

#生成rpc接口
.\protoc.exe -I .\ --grpc_out=. --plugin=protoc-gen-grpc=grpc_cpp_plugin.exe client.proto
```

Protocol Buffer的使用和原理：https://www.ibm.com/developerworks/cn/linux/l-cn-gpb/index.html


# 参考文档

* [VS2015 编译和使用 gRPC](https://blog.csdn.net/u011304970/article/details/75453509)
* [VS2017 编译GRPC入门](https://blog.csdn.net/shan165310175/article/details/86618932)
* [Hello World示例与解析](https://blog.csdn.net/shan165310175/article/details/86619128)