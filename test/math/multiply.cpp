#include "math/multiply.h"

#include "test/testing.h"

TEST(Utils, multiply) {
    EXPECT_DOUBLE_EQ(multiply(3, 4), 12);
}

TEST(Utils, divide) {
    EXPECT_DOUBLE_EQ(divide(12, 4), 3);
}
