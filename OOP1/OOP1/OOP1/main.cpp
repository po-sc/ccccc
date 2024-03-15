#include <iostream>

class A {
public:
    int value;

    A() : value(0) {}
    A(int value) : value(value) {}

    void f(int x) {
        value += x;
    }
};

int main() {
    A a; // создание объекта класса A
    a.f(10); // вызов метода f объекта a с параметром 10
    std::cout << "a.value = " << a.value << std::endl; // вывод значения поля value объекта a
    return 0;
}
