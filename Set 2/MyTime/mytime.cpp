#include <iostream>
#include"mytime.h"
using namespace std;

MyTime::MyTime():m_hours(0),m_minutes(0),m_seconds(0) { }
MyTime::MyTime(int hh, int mm) : m_hours(hh), m_minutes(mm) {}
MyTime::MyTime(int hh, int mm,int ss) : m_hours(hh), m_minutes(mm), m_seconds(ss) {}


MyTime MyTime:: operator+(const MyTime &r1) {
  int th = m_hours + r1.m_hours;
  int tm = m_minutes + r1.m_minutes;
  return MyTime(th,tm);
}
MyTime MyTime:: operator-(const MyTime &r1) {
  int th = m_hours-r1.m_hours;
  int tm = m_minutes + r1.m_minutes;
  return MyTime(th,tm);
}
MyTime MyTime:: operator +(int nmins){
    int tmins = m_minutes + nmins;
    int thrs = m_hours;
    return MyTime(thrs, tmins);

}
MyTime MyTime:: operator -(int nmins){
     int tmins = m_minutes - nmins;
    int thrs = m_hours;
    return MyTime(thrs, tmins);

}
MyTime& MyTime:: operator++() {
  ++m_minutes;
  return *this;
}
MyTime MyTime:: operator++(int dummy) {
  MyTime orig(*this);
  ++m_minutes;
  return orig;
}
bool MyTime:: operator==(const MyTime &r1) {
  return m_hours == r1.m_hours && m_minutes == r1.m_minutes;
}
bool MyTime:: operator<(const MyTime &r1) {
  return m_hours < r1.m_hours && m_minutes < r1.m_minutes;
}
bool MyTime:: operator>(const MyTime &r1) {
  return m_hours > r1.m_hours && m_minutes > r1.m_minutes;
}
int MyTime:: getmim(){
    return m_minutes;
}
int MyTime:: gethr(){
    return m_hours;
}

