#include "mytime.h"
#include <gtest/gtest.h>
TEST(MyTime,DefConstructor)
{
   MyTime t;
   EXPECT_EQ(0,t.getmim());
   EXPECT_EQ(0,t.gethr());

}

