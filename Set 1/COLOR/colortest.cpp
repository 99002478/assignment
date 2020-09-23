#include "COLOR.h"
#include "gtest/gtest.h"


namespace{

TEST(colors, DefaultConstructor) {
	colors c1;
	EXPECT_EQ(black, c1.getClr());
}

TEST(colors, ParameterizedConstructor) {
	colors c1(1,0,0);
	EXPECT_EQ(red, c1.getClr());
}

TEST(colors, ParameterizedConstructor1) {
	colors c1(0);
	EXPECT_EQ(red, c1.getClr());
}

TEST(colors, ParameterizedConstructor2) {
	colors c1(white);
	EXPECT_EQ(white, c1.getClr());
}



TEST(colors, DisplayTest) {
	colors c1(green);
	string ExpectedOut = "1\n";
	testing::internal::CaptureStdout();
	c1.display();
	string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(colors, invertTest) {
	colors c1(white);
	c1.invert();
	EXPECT_EQ(black,c1.getClr());
}

}
