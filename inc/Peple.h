//
// Created by xinanbei on 2022/11/15.
//

#ifndef LOCAL_GITHUB_PEPLE_H
#define LOCAL_GITHUB_PEPLE_H

#include <iostream>
#include <string>

using namespace std;

class Peple {
private:
    string name;
    int age;
    long long id;

public:
    Peple();

    ~Peple();

    void print() {
        cout << "your name is " << this->name << endl;
        cout << this->name << " age is " << this->age << endl;
        cout << this->name << " id is " << this->id << endl;
    }
};

#endif //LOCAL_GITHUB_PEPLE_H
