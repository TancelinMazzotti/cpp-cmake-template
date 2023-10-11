#include <gtest/gtest.h>
#include "foo/Foo.hpp"  // Incluez l'en-tête de la classe Foo

TEST(FooTest, AddFunctionTest) {
    // Créez une instance de la classe Foo
    Foo foo;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(foo.add(2, 3), 5);  // Vérifiez si 2 + 3 est égal à 5
    EXPECT_EQ(foo.add(-1, 1), 0);  // Vérifiez si -1 + 1 est égal à 0
    // Ajoutez d'autres tests si nécessaire
}

TEST(FooTest, AddFunction2Test) {
    // Créez une instance de la classe Foo
    Foo foo;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(foo.add(2, 3), 5);  // Vérifiez si 2 + 3 est égal à 5
    EXPECT_EQ(foo.add(-1, 1), 0);  // Vérifiez si -1 + 1 est égal à 0
    // Ajoutez d'autres tests si nécessaire
}
