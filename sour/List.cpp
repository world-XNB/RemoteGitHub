//
// Created by xinanbei on 2022/11/29.
//

#include "../inc/List.h"

int Ilist::size() const {
    return this->_size;
}

void Ilist::insert(ilist_item *ptr, int value) {
    if (!ptr)
        insert_front(value);
    else {
        bump_up_size();
        new ilist_item(value, ptr);
    }
}

void Ilist::insert_front(int value) {
    ilist_item *ptr = new ilist_item(value);
    if (!_at_front)
        _at_front = _at_end = ptr;
    else {
        ptr->next(this->_at_front);
        _at_front = ptr;
    }
}

void Ilist::inert_end(int value) {
    if (!_at_end)
        _at_end = _at_front = new ilist_item(value);
    else
        _at_end = new ilist_item(value, _at_front);
    bump_up_size();
}

void Ilist::bump_up_size() {

}

ilist_item *Ilist::find(int value) {
    ilist_item *ptr = _at_front;
    while (ptr) {
        if (ptr->value() == value)
            break;
        ptr = ptr->next();
    }
    return ptr;
}

void Ilist::display(ostream &os) {
    os << "\n(" << _size << ")(";
    ilist_item *ptr = _at_front;
    while (ptr) {
        os << ptr->value() << " ";
    }
    os << ")\n";
}

void Ilist::remove_front() {
    if (this->_at_front) {
        ilist_item *ptr = _at_front;
        _at_front = _at_front->next();
        bump_up_size();
        delete ptr;
    }
}

inline void Ilist::remove_all() {
    while (_at_front) {
        this->remove_front();
        this->_size = 0;
        this->_at_front = this->_at_end = nullptr;
    }
}

int Ilist::remove(int value) {
    ilist_item *plist = this->_at_front;
    int elem_cnt = 0;
    while (plist && plist->value() == value) {
        plist = plist->next();
        remove_front();
        ++elem_cnt;
    }
    if (!plist)
        return elem_cnt;
    ilist_item *prev = plist;
    plist = plist->next();
    while (plist) {
        if (plist->value() == value) {
            prev->next(plist->next());
            delete plist;
            ++elem_cnt;
            bump_up_size();
            plist = prev->next();
            if (!plist) {
                this->_at_end = prev;
                return elem_cnt;
            }
        } else {
            prev = plist;
            plist = plist->next();
        }
        return elem_cnt;
    }
}


ilist_item::ilist_item(int value, ilist_item *item_to_link_to) {
    if (!item_to_link_to)
        this->_next = nullptr;
    else {
        this->_next = item_to_link_to->_next;
        item_to_link_to->_next = this;
    }
}

void ilist_item::next(ilist_item *link) {
    this->_next = link;
}
