//
// Created by xinanbei on 2022/11/27.
//

#ifndef LOCAL_GITHUB_STACK_H
#define LOCAL_GITHUB_STACK_H

#include <vector>

using std::vector;

class iStack {
public:
    explicit iStack(int capacity) : _stack(capacity), _top(0) {}

    bool pop(int &value);

    bool push(int value);

    bool full();

    bool empty() const;

    void display();

    int size() const;

private:
    int _top;
    vector<int> _stack;
};


#endif //LOCAL_GITHUB_STACK_H
