    C++中stack 是容器么？
    我们使用的stack是属于哪个版本的STL？
    我们使用的STL中stack是如何实现的？
    stack 提供迭代器来遍历stack空间么？

三个最为普遍的STL版本：

    HP STL 其他版本的C++ STL，一般是以HP STL为蓝本实现出来的，HP STL是C++ STL的第一个实现版本，而且开放源代码。

    P.J.Plauger STL 由P.J.Plauger参照HP STL实现出来的，被Visual C++编译器所采用，不是开源的。

    SGI STL 由Silicon Graphics Computer Systems公司参照HP STL实现，被Linux的C++编译器GCC所采用，SGI STL是开源软件，源码可读性甚高。

所以我们正在使用的是SGI STL
stack可以说是容器 但是往往被归类为容器适配器