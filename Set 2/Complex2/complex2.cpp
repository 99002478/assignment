#include <iostream>
#include "complex2.h"

complex2::complex2(): m_real(0), m_imag(0){}

complex2::complex2(int x, int y): m_real(x), m_imag(y){}

complex2 :: complex2(int t): m_real(t) {}

complex2 complex2::operator+ (const complex2 &ref)
{

    int imaginary = m_imag + ref.m_imag;
    int real = m_real + ref.m_real;
    return complex2(imaginary,real);
}

complex2 complex2::operator- (const complex2 &ref)
{

    int imaginary = m_imag - ref.m_imag;
    int real = m_real - ref.m_real;
    return complex2(imaginary,real);
}

complex2 complex2::operator* (const complex2 &ref)
{

    int imaginary = m_imag * ref.m_imag;
    int real = m_real * ref.m_real;
    return complex2(imaginary,real);
}

complex2& complex2::operator++(){

++m_imag;
return *this;
}

complex2 complex2 :: operator ++(int numbert)
{

    complex2 oig(*this);
    ++m_real;
    return oig;
}

bool complex2 :: operator == (const complex2 &ref)
{

    return m_real == ref.m_real && m_imag == ref.m_imag;

}

void complex2 :: display ()
{

    std::cout<<m_real<<","<<m_imag<<"\n";
}
float complex2 :: getreal()
{

    return m_real;
}
float complex2 :: getimag()
{

    return m_imag;
}
