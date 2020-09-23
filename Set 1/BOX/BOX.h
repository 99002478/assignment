#include<string>
class BOX {
  int m_length,m_breadth,m_height;

public:
  BOX();
  BOX(int, int, int);
  BOX (int);
  BOX (const BOX &);
  double volume();
  int getlength();
  int getbreadth();
  int getheight();
  void display();
};
