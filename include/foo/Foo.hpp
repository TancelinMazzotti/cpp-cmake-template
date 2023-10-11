#ifndef FOO_HPP
#define FOO_HPP

#include "foo/bar/Bar.hpp"

class Foo {
public:
    Foo();
    void doSomething();
    void doSomethingWithBar();
    int add(int a, int b);
};

#endif
