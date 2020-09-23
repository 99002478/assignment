#include<string>
class account {
  int customerId; // ideally to be of string type
  std::string customerName;
  double balance;

public:
  account();
  account(int, std::string, double);
  account (int, int);
  account(const account &);
  void credit(double);
  void debit(double);
  int getCustomerId();
  std::string getCustomerName();
  double getBalance() const;
  void display();
};

