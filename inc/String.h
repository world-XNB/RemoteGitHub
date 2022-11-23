//
// Created by xinanbei on 2022/11/23.
//

#ifndef LOCAL_GITHUB_STRING_H
#define LOCAL_GITHUB_STRING_H

#include <iostream>

using namespace std;

class String;

istream &operator>>(istream &, String &);

ostream &operator<<(istream &, const String &);

class String {
public:
    String();

    explicit String(const char *);

    String(const String &);

    ~String();

//    一组重载的赋值操作符
    String &operator=(const String &);

    String &operator=(const char *);

//    一组重载的等于操作符
    bool operator==(const String &);

    bool operator==(const char *);

//    重载的下标操作符
    char &operator[](int);

//    成员访问函数
    int size() const {
        return _size;
    }

    char *c_str() {
        return _string;
    }

private:
    int _size;
    char *_string;
};

#endif //LOCAL_GITHUB_STRING_H
