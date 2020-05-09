#include "math/add.h"

#include "test/testing.h"

TEST(Utils, add) {
    EXPECT_EQ(add(3, 4), 7);
}

TEST(Utils, substract) {
    EXPECT_EQ(substract(7, 4), 3);
}
