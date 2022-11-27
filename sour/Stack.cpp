//
// Created by xinanbei on 2022/11/27.
//
#include <iostream>
#include "../inc/Stack.h"


bool iStack::pop(int &top_value) {
    if (this->empty())
        return false;
    top_value = this->_stack[--this->_top];
    std::cout << "iStack::pop():" << top_value << std::endl;
    return true;
}

bool iStack::push(int value) {
    std::cout << "iStack::push(" << value << ")\n";
    if (full())
        return false;
    this->_stack[this->_top++] = value;
    return true;
}

bool iStack::full() {
    return this->_top >= this->_stack.size() - 1;
}

bool iStack::empty() const {
    return this->_top == 0;
}

void iStack::display() {
    if (!size()) {
        std::cout << "(0)\n";
        return;
    }
    std::cout << "(" << size() << ")(bot:";
    for (int i = 0; i < this->_top; ++i) {
        std::cout << this->_stack[i] << " ";
    }
    std::cout << ":top)" << std::endl;
}

int iStack::size() const {
    return this->_top;
}
