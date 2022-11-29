//
// Created by xinanbei on 2022/11/29.
//

#ifndef LOCAL_GITHUB_LIST_H
#define LOCAL_GITHUB_LIST_H

#include <iostream>

using std::ostream;
using std::cout;

class Ilist;

class ilist_item;

class ilist_item {
public:
    explicit ilist_item(int value, ilist_item *item_to_link_to = nullptr);

    int value() { return this->_value; }

    ilist_item *next() { return this->_next; }

    void next(ilist_item *);

    void value(int new_value) { this->_value = new_value; }

private:
    int _value;
    ilist_item *_next;
};

class Ilist {
public:
    Ilist() : _at_front(nullptr), _at_end(nullptr), _size(0) {}

    int size() const;

    void insert(ilist_item *ptr, int value);

    void insert_front(int value);

    void inert_end(int value);

    void remove_front();

    void remove_all();

    int remove(int value);

    void bump_up_size();

    ilist_item *find(int value);

    void display(ostream &os = cout);

private:
    ilist_item *_at_front;
    ilist_item *_at_end;
    int _size;

    Ilist(const Ilist &);

    Ilist &operator=(const Ilist &);
};

#endif //LOCAL_GITHUB_LIST_H
