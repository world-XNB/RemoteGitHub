#include <iostream>
#include <vector>
#include <algorithm>

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

//学习容器Vector
int vectorFun() {
    vector<int> veca;
    const int size = 8;
    const int value = 1024;
    vector<int> vecb(size, value);

    int ia[4] = {0, 1, 1, 2,};
    vector<int> vecc(ia, ia + 4);

    vector<int> vecd(vecb);

//    遍历——下标遍历
    int ia_size = vecc.size();
    for (int i = 0; i < ia_size; ++i) {
        cout << vecc[i];
    }
//    遍历——迭代器
    vector<int>::iterator iter = vecc.begin();
    for (; iter != vecc.end(); ++iter) {
        cout << *iter;
    }
    return 0;
}

//泛型算法应用到vector——包含头文件algorithm
int algorithmFun() {
    int t[10] = {0, 3, 2, 1, 9, 5, 6, 4, 8, 7};
    vector<int> test(t, t + 10);
    sort(test.begin(), test.end());
    for (int &i: test) {
        cout << i << "\t";
    }
    cout << endl;

    int search_value;
    cout << "please input your search_value:";
    cin >> search_value;
    vector<int>::iterator found;
    found = find(test.begin(), test.end(), search_value);
    if (found != test.end())
        cout << "search_value found" << endl;
    else
        cout << "search_value not found" << endl;

    reverse(test.begin(), test.end());
    for (auto j = test.begin(); j != test.end(); ++j) {
        cout << *j << "\t";
    }
}

int main() {
//    pepleFun();
//    arrayFun();
//    vectorFun();
//    algorithmFun();
    const int a = 0;
    const int *b = &a;
    return 0;
}
