#include "baz/Baz.hpp"
#include <iostream>

Baz::Baz() {
    // Constructeur de la classe Baz
}

void Baz::doSomethingWithFoo() {
    Foo foo;
    foo.doSomething();
}


int Baz::add(int a, int b) {
    return a+b;
}