#include<iostream>
#include "account.h"
account::account() :
    customerId(0), customerName(""), balance(0) {

}
account::account(int id, std::string name, double bal) :
  customerId(id), customerName(name), balance(bal) {

}
account::account(const account& ref) :
        customerId(ref.customerId), customerName(ref.customerName),
                                              balance(ref.balance) {

}
void account::credit(double amount) {
  balance += amount;
}
void account::debit(double amount) {
  //min balance check
  balance -= amount;
}
int account::getCustomerId() {
  return customerId;
}
std::string account::getCustomerName() {
  return customerName;
}
double account::getBalance() const {
    return balance;
}
void account::display() {
    std::cout << customerId << "," << customerName << ","
                                         << balance << "\n";
}

