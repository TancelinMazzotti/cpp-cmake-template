#include <gtest/gtest.h>
#include "baz/Baz.hpp"  // Incluez l'en-tête de la classe Baz

TEST(BazTest, AddFunctionTest) {
    // Créez une instance de la classe Baz
    Baz baz;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(baz.add(2, 3), 5);  // Vérifiez si 2 + 3 est égal à 5
    EXPECT_EQ(baz.add(-1, 1), 0);  // Vérifiez si -1 + 1 est égal à 0
    // Ajoutez d'autres tests si nécessaire
}
