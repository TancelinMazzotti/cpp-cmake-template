#include <iostream>

#include "foo/Foo.hpp"
#include "baz/Baz.hpp"

int main() {
    Foo foo;
    foo.doSomething();
    foo.doSomethingWithBar();

    Baz baz;
    baz.doSomethingWithFoo();

    
    std::cout << "Programme principal!" << std::endl;
    
    return 0;
}
