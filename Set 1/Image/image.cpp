#include<iostream>
#include "image.h"


Image::Image(): m_x(0),m_y(0),m_width(0),m_height(0) {}

Image::Image(int x, int y, int w, int h): m_x(x),m_y(y),m_width(w),m_height(h) {}

Image::Image(const Image& ref) :
    m_x(ref.m_x), m_y(ref.m_y), m_width(ref.m_width), m_height(ref.m_height)
    { }

void Image :: Move(int nx, int ny){
    m_x = nx;
    m_y = ny;
}
int Image :: scale(int factor)
{
    m_width = m_width * factor;
    m_height = m_height * factor;

    return factor;
}
void Image :: ReSize(int iwidth,int iheight)
{
    m_width = iwidth;
    m_height = iheight;
}

int Image :: get_x()
{

    return m_x;
}
int Image :: get_y() {
    return m_y;
}
int Image :: get_width(){
return m_width;
}
int Image :: get_height(){
return m_height;
}
void Image :: display(){
std:: cout<<m_x<<","<<m_y<<","<<m_width<<","<<m_height<<"\n";
}
