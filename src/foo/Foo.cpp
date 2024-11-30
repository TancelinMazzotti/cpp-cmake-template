#include <iostream>
#include "foo/Foo.hpp"

namespace foo {

Foo::Foo() {}

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