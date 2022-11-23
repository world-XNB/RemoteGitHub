# RemoteGitHub

Get familiar with git and GitHub

## 项目文件介绍

1. Peple相关文件是关于peple类的实现与操作
2. Array相关文件是关于array模板类的实现与操作

## 项目文件相关笔记

1. Peple相关笔记——类
    - 编程习惯：类定义放在.h文件中，类声明放在.cpp文件中
    - 类成员函数声明未定义错误
        + 构造函数或则析构函数，如果声明未定义，又声明了这个类的实例一定会报错
        + 其它函数，只有在被调用时才会报错
    - 类访问修饰符
        + 公有修饰符(public)
        + 私有修饰符(private)
        + 受保护修饰符(protected)
    - 累继承有三种类型：public、private、protected
    - new:新建一个对象，new运算符总是返回一个指针

2. Array相关笔记——模板类
    - 编程习惯(要求)： **模板类不支持声明(.h)和实现(.cpp)分开写**
    - 模板类成员声明未定义错误
    - elemType:元素类型——一个抽象概念
    - 类模板写法
    - 类模板成员函数写法
    - 类模板定义对象写法
    - 虚拟函数、纯虚函数
    - 操作符重载


3. String相关笔记
    - 函数重载
    - 缺省构造函数、拷贝构造函数
    - 操作符重载
        + 形式：return_type operator op (parameter_list);
        + 例如：char& operator[](int);
    - 当类的声明和定义分别在两个文件中时，explicit只能写在在声明中，不能写在定义中。