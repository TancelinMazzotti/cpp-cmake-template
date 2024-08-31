#include <gtest/gtest.h>
#include "baz/Bazbis.hpp"  // Incluez l'en-tête de la classe Bazbis

TEST(BazbisTest, SubFunctionTest) {
    // Créez une instance de la classe Bazbis
    Bazbis bazbis;

    // Utilisez ASSERT ou EXPECT pour vérifier le comportement attendu
    EXPECT_EQ(bazbis.sub(8, 3), 5);  // Vérifiez si 8 - 3 est égal à 5
    EXPECT_EQ(bazbis.sub(-1, 1), -2);  // Vérifiez si -1 - 1 est égal à -2
    // Ajoutez d'autres tests si nécessaire
}
