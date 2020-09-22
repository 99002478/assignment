#include "currency.h"
#include <iostream>

currency::currency() :m_rupees(0), m_paise(0) {}
currency::currency(int rp, int ps):m_rupees(rp),m_paise(ps){}
currency::currency(int ps) {
	m_paise= m_paise + ps;
	m_rupees = 0;
	if (m_paise > 99) {
		m_rupees += 1;
		m_paise = m_paise - 100;
	}
}
currency::currency(const currency& ref) : m_rupees(ref.m_rupees), m_paise(ref.m_paise) {}
currency currency::operator+(const currency& ref) {
	int rp = m_rupees + ref.m_rupees;
	int ps = m_paise + ref.m_paise;
	return currency(rp, ps);
}
currency currency::operator-(const currency& ref) {
	int rp = m_rupees - ref.m_rupees;
	int ps = m_paise - ref.m_paise;
	return currency(rp, ps);
}
currency currency::operator+(int p) {
	int rp = m_rupees;
	int ps = m_paise + p;
	if (ps > 99) {
		rp += 1;
		ps -= 100;
	}
	return currency(rp, ps);
}
currency currency::operator-(int p) {
	int rp = m_rupees;
	int ps = m_paise - p;
	if (ps < 0) {
		rp -= 1;
		ps += 100;
	}
	return currency(rp, ps);
}
currency currency:: operator ++ ()
{
	currency temp;
	if (temp.m_paise > 99) {
		temp.m_rupees = temp.m_rupees + 1;
		temp.m_paise = temp.m_paise - 100;
	}
	temp.m_rupees += m_rupees ;
	temp.m_paise = m_paise + 1;

	return temp;
}

currency currency:: operator ++ (int dummy)//post
{
	currency temp;
	temp.m_rupees = m_rupees;
	temp.m_paise = m_paise++;
	if (temp.m_paise > 99) {
		temp.m_rupees += 1;
		temp.m_paise -= 100;
	}
	return temp;
}
int currency::rupees() {
	return m_rupees;
}
int currency::paise() {
	return m_paise;
}
bool currency ::   operator== (const currency &ref_val)
{
	return m_rupees == ref_val.m_rupees && m_paise == ref_val.m_paise;
}
bool currency::operator< (const currency& ref_val1) {
	return m_rupees < ref_val1.m_rupees && m_paise < ref_val1.m_paise;
}
bool currency::operator> (const currency& ref_val2) {
	return m_rupees > ref_val2.m_rupees && m_paise > ref_val2.m_paise;
}
void currency::display() {
	std::cout << m_rupees << "." << m_paise;
}
