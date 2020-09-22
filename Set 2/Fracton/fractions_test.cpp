#include "fractions.h"
#include <gtest/gtest.h>
TEST(fraction,DefConstructor)
{
   fraction f;
   EXPECT_EQ(0,f.getnum());
   EXPECT_EQ(0,f.getdenom());

}



