#include"complexno.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(a,b){
	complexno<int> p1(1,1);
	EXPECT_EQ(1, p1.real());
	EXPECT_EQ(1, p1.image());
	std::string ExpectedOut="1,1";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
