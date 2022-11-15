#include <iostream>


using namespace std;


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

Peple::Peple() {
    this->name = "xiaoming";
    this->age = 18;
    this->id = 11903990207;
}

Peple::~Peple() = default;

int main() {
    cout << "Hello, World!" << endl;
    cout << "I want merge the two branch!" << endl;
    cout << "this is my github code!" << endl;
    cout << "i want to change my code in github" << endl;

    Peple p = *new Peple;
    p.print();
    return 0;
}
