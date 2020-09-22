#include<string>
class MyTime {
  int m_hours;
  int m_minutes;
  int m_seconds;

public:
  MyTime();
  MyTime(int , int ) ;
  MyTime(int , int , int) ;
  MyTime operator +(const MyTime &r1);
  MyTime operator -(const MyTime &r1);
  MyTime operator +(int);
  MyTime operator -(int);
  MyTime& operator ++();
  MyTime operator ++(int);
  bool operator ==(const MyTime &r1);
  bool operator <(const MyTime &r1);
  bool operator >(const MyTime &r1);
  int getmim();
  int gethr();
};
