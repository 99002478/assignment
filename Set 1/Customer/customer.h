#include <iostream>
using namespace std;

enum AccountType {
    Saving, Current
    };
class Customer {
    int m_custId;
    //char m_type;
    string m_custName;
    int m_phone;
    double m_balance;
  public:
    Customer();
    Customer(int, string, int, double);
    Customer(int, string, int);
    Customer(const Customer &);
    void credit(double);
    void makeCall(int);
    double getBalance();
    void display();
};
