#include<iostream>
#include"complexno.h"
template<typename T>
complexno<T>::complexno():m_real(0),m_image(0){}
template<typename T>
complexno<T>::complexno(T a,T i):m_real(a),m_image(i){}
template<typename T>
T complexno<T>::real(){
	return m_real;
}
template<typename T>
T complexno<T>::image(){
	return m_image;
}
template<typename T>
void complexno<T>::display(){
	std::cout<<m_real<<","<<m_image;
}

