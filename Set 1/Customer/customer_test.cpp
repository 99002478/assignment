#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer,DisplayTest) {
    Customer c1(1001,"Pm",50000);
    std::string ExpectedOut="1001,Pm,50000";
    testing::internal::CaptureStdout();
    c1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
