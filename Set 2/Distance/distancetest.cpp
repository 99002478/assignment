#include "distance.h"
#include <gtest/gtest.h>
TEST(Distance,DisplayTest) {
    Distance d1(10,20);
    std::string ExpectedOut="Distance is:10 feets &20 inches.";
    testing::internal::CaptureStdout();
    d1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(Distance,ParConst) {
    Distance d1(10,20);
    EXPECT_EQ(10,d1.get_m_feet());
    EXPECT_EQ(20,d1.get_m_inches());
}

