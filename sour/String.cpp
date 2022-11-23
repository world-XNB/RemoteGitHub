//
// Created by xinanbei on 2022/11/23.
//
#include "../inc/String.h"
#include <cstring>
#include <cassert>
#include <iomanip>


String::String() {
    _size = 0;
    _string = nullptr;
}

String::String(const char *str) {
    if (!str) {
        _size = 0;
        _string = nullptr;
    } else {
        _size - strlen(str);
        _string = new char[_size + 1];
        strcpy(_string, str);
    }
}

String::String(const String &rhs) {
    _size = rhs._size;
    if (!rhs._string)
        _string = nullptr;
    else {
        _string = new char[_size + 1];
        strcpy(_string, rhs._string);
    }
}

String::~String() {
    delete[]_string;
}

String &String::operator=(const String &rhs) {
    if (this != &rhs) {
        delete[]_string;
        _size = rhs._size;
        if (!rhs._string)
            _string = nullptr;
        else {
            _string = new char[_size + 1];
            strcpy(_string, rhs._string);
        }
    }
    return *this;
}

String &String::operator=(const char *s) {
    if (!s) {
        _size = 0;
        delete[]_string;
        _string = nullptr;
    } else {
        _size = strlen(s);
        delete[]_string;
        _string = new char[_size + 1];
        strcpy(_string, s);
    }
    return *this;
}

bool String::operator==(const String &rhs) {
    if (_size != rhs._size)
        return false;
    return strcmp(_string, rhs._string) ? false : true;
}

bool String::operator==(const char *s) {
    return strcmp(_string, s) ? false : true;
}

char &String::operator[](int elem) {
    assert(elem >= 0 && elem < _size);
    return _string[elem];
}

inline istream &operator>>(istream &io, String &s) {
//    人工限制最大4096个字符
    const int limit_string_size = 4096;
    char inBuf[limit_string_size];
//    setw是iostream库的一部分
    io >> setw(limit_string_size) >> inBuf;
    s = inBuf;
    return io;
}

inline ostream &operator<<(ostream &os, String &s) {
    return os << s.c_str();
}

