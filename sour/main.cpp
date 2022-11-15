#include <iostream>
#include "../inc/Peple.h"
#include "../inc/Array.h"

//调试Peple类的函数
int pepleFun() {
    Peple *p = new Peple;
    p->print();
    return 0;
}

//调试Array模板类的函数
int arrayFun() {
    int array_size = 4;
    Array<int> ia(array_size);
    Array<double> da(array_size);
    Array<char> ca(array_size);
    int i;
    for (i = 0; i < array_size; ++i) {
        ia[i] = i;
        da[i] = i * 1.75;
        ca[i] = 'a' + i;
    }
    for (int j = 0; j < array_size; ++j) {
        cout << "[" << j << "]ia:" << ia[j] << "\tca:" << ca[j] << "\tda:" << da[j] << endl;
    }
    return 0;
}


int main() {
    pepleFun();
    arrayFun();
    return 0;
}
