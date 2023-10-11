#include <gtest/gtest.h>

TEST(MyMathTest, AddTest) {
    EXPECT_EQ(2 + 3, 5);
    EXPECT_EQ(-1 + 1, 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
