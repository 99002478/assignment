#include "Box.h"
#include <gtest/gtest.h>

TEST(BOX,DefaultConstructor) {
    BOX b1;
    EXPECT_EQ(0,b1.getlength());
    EXPECT_EQ(0,b1.getbreadth());
    EXPECT_EQ(0,b1.getheight());
     EXPECT_EQ(0,b1.volume());

}
TEST(BOX,ParameterizedConstructor) {
    BOX b1(10,20,30);

    EXPECT_EQ(10,b1.getlength());
    EXPECT_EQ(20,b1.getbreadth());

    EXPECT_EQ(30,b1.getheight());


}
TEST(BOX,CopyConstructor) {
    BOX b1(10,20,30);
    BOX b2(b1);
    EXPECT_EQ(10,b2.getlength());

    EXPECT_EQ(20,b2.getbreadth());
    EXPECT_EQ(30,b2.getheight());


}
TEST(BOX,VolumeTest) {
    BOX b1(10,20,30);

    EXPECT_EQ(6000.0,b1.volume());

}


TEST(BOX,DisplayTest) {
    BOX b1(10,20,30);
    std::string ExpectedOut="10,20,30\n";
    testing::internal::CaptureStdout();
    b1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


