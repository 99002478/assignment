#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;
Point:: Point():
    m_x(0),m_y(0) {}

Point:: Point(int a, int b):
    m_x(a),m_y(b) {}

Point::Point(const Point &ref): m_x(ref.m_x),m_y(ref.m_y) {}

double Point:: distancefromorigin() {

return sqrt((m_x * m_x) + (m_y * m_y));

}

int Point :: get_x()
{
    return m_x;
}
int Point :: get_y()
{

return m_y;
}
int Point :: quadrant() {

if(m_x>0 && m_y>0) {
return 1;
}
else if(m_x<0 && m_y>0)
{
    return 2;
}
else if(m_x<0 && m_y <0)
{

    return 3;
}
else if(m_x>0 && m_y<0)
{

    return 4;
}



}

int Point :: isOrigin() {

if(m_x == 0 && m_y == 0)
return 0;


}

int Point:: isOnYAxis() {
if(m_x == 0)
{
    return 0;
}

}

void Point :: display(){
cout<<m_x<<","<<m_y;
}
