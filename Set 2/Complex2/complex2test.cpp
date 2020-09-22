#include "complex2.h"
#include <gtest/gtest.h>

TEST(complex2,DefaultConstructor) {
    complex2 a1;
    EXPECT_EQ(0,a1.getreal());
    EXPECT_EQ(0,a1.getimag());


}

