#include "image.h"
#include <gtest/gtest.h>
TEST(Image,ParameterizedConstructor) {
    Image I1(1,2,10,23);

    EXPECT_EQ(2,I1.scale(2));
     EXPECT_EQ(1,I1.get_x());

}

TEST(Image,DisplayTest) {
    Image I1(10,20,30,40);
    std::string ExpectedOut="10,20,30,40\n";
    testing::internal::CaptureStdout();
    I1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
