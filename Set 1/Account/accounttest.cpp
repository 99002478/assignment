#include "account.h"
#include <gtest/gtest.h>

TEST(account,DefaultConstructor) {
    account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    EXPECT_EQ(0.0,a1.getCustomerId());
    EXPECT_EQ(0,a1.getCustomerName().length());
}
TEST(account,ParameterizedConstructor) {
    account a1(1001,"PM",5000.0);
    EXPECT_EQ(1001,a1.getCustomerId());
    EXPECT_STREQ("PM",a1.getCustomerName().c_str());
    EXPECT_EQ(7,a1.getCustomerName().length());
    EXPECT_EQ(5000.0,a1.getBalance());

}
TEST(account,CopyConstructor) {
    account a1(1001,"PM",5000.0);
    account a2(a1);
    EXPECT_EQ(1001,a2.getCustomerId());
    EXPECT_STREQ("PM",a2.getCustomerName().c_str());
    EXPECT_EQ(7,a2.getCustomerName().length());
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(account,CreditTest) {
    account a1(1001,"PM",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(account,DebitTest) {
    account a1(1001,"PM",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}
TEST(account,TransactionTest) {
    account a1(1001,"PM",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}
TEST(account,DisplayTest) {
    account a1(1001,"PM",5000.0);
    std::string ExpectedOut="1001,PM,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

