//
// Created by xinanbei on 2022/11/15.
//

//该文件是一个模板类，注意模板类不支持声明(.h)和实现(.cpp)分开写
//该文件是一个模板类，注意模板类不支持声明(.h)和实现(.cpp)分开写
//该文件是一个模板类，注意模板类不支持声明(.h)和实现(.cpp)分开写

#ifndef LOCAL_GITHUB_ARRAY_H
#define LOCAL_GITHUB_ARRAY_H


template<class elemType>
class Array {
public:
    explicit Array(int size = DefaultArraySize);

    Array(elemType *array, int array_size);

    Array(const Array &rhs);

    virtual ~Array() {
        delete[] ia;
    }

    bool operator==(const Array &) const;

    bool operator!=(const Array &) const;

    Array &operator=(const Array &);

    int size() const { return _size; }

    virtual elemType &operator[](int index) { return ia[index]; }

//    virtual void sort();
//
//    virtual elemType min() const;
//
//    virtual elemType max() const;
//
//    virtual int find(const elemType &value) const;

protected:
    static const int DefaultArraySize = 12;
    int _size{};
    elemType *ia;
};

template<class elemType>
Array<elemType>::Array(int size) {
    this->_size = size;
    this->ia = new elemType(size);//申请内存空间
}

template<class elemType>
Array<elemType>::Array(elemType *array, int array_size) {

}

template<class elemType>
Array<elemType>::Array(const Array &rhs) {

}

template<class elemType>
bool Array<elemType>::operator==(const Array &) const {
    return false;
}

template<class elemType>
bool Array<elemType>::operator!=(const Array &) const {
    return false;
}


#endif //LOCAL_GITHUB_ARRAY_H
