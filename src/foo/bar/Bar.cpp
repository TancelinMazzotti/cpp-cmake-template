#include "foo/bar/Bar.hpp"
#include <iostream>

namespace foo::bar {

Bar::Bar() {
    // Constructeur de la classe Bar
}

void Bar::doSomethingElse() {
    std::cout << "Je fais quelque chose d'autre dans Bar!" << std::endl;
}

int Bar::add(int a, int b) {
    return a+b;
}

}