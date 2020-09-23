#include<iostream>
#include "customer.h"

const double CALL_RATE = 1.0;
Customer::Customer() :
    m_custId(0), m_custName(0),m_phone(0), m_balance(0) {}

Customer::Customer(int id,std::string cname,int num,double bal) :
   m_custId(id), m_custName(cname),m_phone(num), m_balance(bal) {}

Customer::Customer(int id, std::string name,int ph):
  m_custId(id), m_custName(name),m_phone(ph){}


Customer::Customer(const Customer& ref) :
    m_custId(ref.m_custId), m_custName(ref.m_custName),m_phone(ref.m_phone), m_balance(ref.m_balance){
}
void Customer::credit(double credt) {
   m_balance+=credt;
   std::cout<<"\n Credited amount: "<<credt;
   //return credt;
}
void Customer::makeCall(int mins) {
    m_balance -= mins * CALL_RATE;
    std::cout<<"\n Remaining Balance :" <<m_balance;
    //return m_balance;
}

double Customer::getBalance(){
    std::cout<<"\n Total Balance is :" <<m_balance;
    return m_balance;
}
void Customer::display() {
    std::cout <<m_custId<<","<<m_custName<<"," << m_balance;
}
