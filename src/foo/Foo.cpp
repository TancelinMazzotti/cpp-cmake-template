#include "foo/Foo.hpp"
#include <iostream>

Foo::Foo() {
    // Constructeur de la classe Foo
}

void Foo::doSomething() {
    std::cout << "Je fais quelque chose dans Foo!" << std::endl;
}

void Foo::doSomethingWithBar() {
    Bar bar;
    bar.doSomethingElse();
}

int Foo::add(int a, int b) {
    return a+b;
}