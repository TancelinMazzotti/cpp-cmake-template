#include <gtest/gtest.h>
#include "foo/bar/Bar.hpp"  // Incluez l'en-tête de la classe Foo

namespace foo::bar {

TEST(BarTest, AddFunctionTest) {
    // Créez une instance de la classe Bar
    Bar bar;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(bar.add(2, 3), 5);  // Vérifiez si 2 + 3 est égal à 5
    EXPECT_EQ(bar.add(-1, 1), 0);  // Vérifiez si -1 + 1 est égal à 0
    // Ajoutez d'autres tests si nécessaire
}

TEST(BarTest, AddFunction2Test) {
    // Créez une instance de la classe Bar
    Bar bar;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(bar.add(2, 3), 5);  // Vérifiez si 2 + 3 est égal à 5
    EXPECT_EQ(bar.add(-1, 1), 0);  // Vérifiez si -1 + 1 est égal à 0
    // Ajoutez d'autres tests si nécessaire
}

}