#include <gtest/gtest.h>
#include "core/App.hpp"  // Incluez l'en-tête de la classe Foo

namespace core {

TEST(AppTest, AddFunctionTest) {
    App app;
    EXPECT_EQ(1, 1);
}

}