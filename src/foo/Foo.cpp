#include "foo/Foo.hpp"
#include <iostream>

namespace foo {

Foo::Foo() {
    // Constructeur de la classe Foo
}

void Foo::doSomething() {
    std::cout << "Je fais quelque chose dans Foo!" << std::endl;
}

void Foo::doSomethingWithBar() {
    bar::Bar bar;
    bar.doSomethingElse();
}

int Foo::add(int a, int b) {
    return a+b;
}

}