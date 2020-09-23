#include "point.h"
#include <gtest/gtest.h>


TEST(Point,ParameterizedConstructor) {
    Point a1(3,4);


    EXPECT_EQ(5,a1.distancefromorigin());


}
