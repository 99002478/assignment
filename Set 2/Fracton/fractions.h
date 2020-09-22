#include<string>
class fraction {
  int m_numerator;
  int m_denominator;

public:
  fraction();
  fraction(int , int ) ;
  fraction(int ) ;
  fraction operator +(const fraction &r1);
  fraction operator -(const fraction &r1);
  fraction operator *(const fraction &r1);
  fraction operator +(int);
  fraction operator -(int);
  fraction& operator ++();
  fraction operator ++(int);
  bool operator ==(const fraction &r1);
  bool operator <(const fraction &r1);
  bool operator >(const fraction &r1);
  int getnum();
  int getdenom();
  int simplify(int,int);
  //isSimplest();
  void display();
};




