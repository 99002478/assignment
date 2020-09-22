#include"points.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(a,b){
	points<int> p1(3,4);
	EXPECT_EQ(3, p1.xaxis());
	EXPECT_EQ(4, p1.yaxis());
	EXPECT_EQ(5,p1.distanceFromOrigin());
	EXPECT_EQ(Q1,p1.quadrant());
	std::string ExpectedOut="3,4";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
