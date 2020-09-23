#include<iostream>
#include "Box.h"
BOX::BOX() :
    m_length(0), m_breadth(0), m_height(0) {

}
BOX::BOX(int a, int b, int c) :
  m_length(a), m_breadth(b), m_height(c) {

}
BOX::BOX(const BOX& ref) :
        m_length(ref.m_length), m_breadth(ref.m_breadth),
                                              m_height(ref.m_height) {

}
double BOX::volume() {
  return(m_length * m_breadth * m_height);
}

int BOX::getlength() {
  return m_length;
}
int BOX :: getbreadth() {
  return m_breadth;
}
int BOX :: getheight()
{
    return m_height;
}

void BOX::display() {
    std::cout << m_length << "," << m_breadth << ","
                                         << m_height << "\n";
}
