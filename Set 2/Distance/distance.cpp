#include "Distance.h"
#include<iostream>
Distance::Distance() :m_feet(0), m_inches(0) {}

Distance::Distance(int x, int y) : m_feet(x), m_inches(y) {}

Distance Distance::operator+(const Distance& d1)
{
	Distance temp;
	temp.m_feet = d1.m_feet + m_feet;
	temp.m_inches = d1.m_inches + m_inches;
	temp.m_feet = temp.m_feet + (temp.m_inches / 12);
	temp.m_inches = temp.m_inches % 12;
	return temp;

}
Distance Distance::operator-(const Distance& d1)
{
	Distance temp;
	int a, b;
	a = (d1.m_feet * 12) + d1.m_inches;
	b = m_feet * 12 + m_inches;
	//temp.m_feet = d1.m_feet - m_feet;
	temp.m_inches = a - b;
	temp.m_feet = (temp.m_inches / 12);
	temp.m_inches = temp.m_inches - (temp.m_feet * 12);
	return temp;
}
Distance Distance::operator+(int a)
{
	Distance temp;
	temp.m_feet = a + m_feet;
	temp.m_inches = a + m_inches;
	temp.m_feet = temp.m_feet + (temp.m_inches / 12);
	temp.m_inches = temp.m_inches % 12;
	return temp;
}
Distance Distance::operator-(int x)
{
	Distance temp;
	int a, b;
	a = (x * 12) + x;
	b = m_feet * 12 + m_inches;
	//temp.m_feet = d1.m_feet - m_feet;
	temp.m_inches = a - b;
	temp.m_feet = (temp.m_inches / 12);
	temp.m_inches = temp.m_inches - (temp.m_feet * 12);
	return temp;
}

Distance Distance::operator++()
{
	Distance temp;
	temp.m_feet = m_feet;
	temp.m_inches = m_inches + 1;
	if (temp.m_inches >= 12)
	{
		temp.m_feet = temp.m_feet + 1;
		temp.m_inches = 0;
	}
	return temp;
}
Distance Distance::operator++(int dummy)
{

	Distance temp;
	temp.m_feet = m_feet;
	temp.m_inches = m_inches;
	if (m_inches >= 12)
	{
		m_feet = m_feet + 1;
		m_inches = 0;
	}

	return temp;
}
bool Distance::operator==(const Distance& d1)
{
	if (d1.m_feet == m_feet && d1.m_inches == m_inches)
		return true;
	else
		return false;
}
bool Distance::operator<(const Distance& d1)
{
	if (d1.m_feet > m_feet && d1.m_inches > m_inches)
		return true;
	else
		return false;
}
bool Distance::operator>(const Distance& d1)
{
	if (d1.m_feet < m_feet && d1.m_inches < m_inches)
		return true;
	else
		return false;
}
void Distance::display()
{
	std::cout << "Distance is:" << m_feet << "feets &" << m_inches << " m_incheses.";
}
int Distance::get_m_feet()
{
	return m_feet;
}
int Distance::get_m_inches()
{
	return m_inches;
}
