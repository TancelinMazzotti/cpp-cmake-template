#include <iostream>

#include "foo/Foo.hpp"
#include "baz/Baz.hpp"
#include "baz/Bazbis.hpp"

int main() {
    Foo foo;
    foo.doSomething();
    foo.doSomethingWithBar();

    Baz baz;
    baz.doSomethingWithFoo();

    Bazbis bazbis;
    std::cout << "4 - 3 = " << bazbis.sub(4,3) << std::endl;

    
    std::cout << "Programme principal!" << std::endl;
    
    return 0;
}
