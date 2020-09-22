#include"points.h"
#include<iostream>
#include<math.h>

template<typename T>
points<T>::points():m_x(0),m_y(0){}
template<typename T>
points<T>::points(T x,T y):m_x(x),m_y(y){}
template<typename T>
T points<T>::xaxis(){
	return m_x;
}
template<typename T>
T points<T>::yaxis(){
	return m_y;
}
template<typename T>
T points<T>::distanceFromOrigin(){
	T a;
	a=pow(m_x,2)+pow(m_y,2);
	T origin;
	origin=pow(a,0.5);
	return origin;
}
template<typename T>
Quadrant points<T>::quadrant(){
	if(m_x>0 && m_y<0){return Q4;}
	else if(m_x>0 && m_y>0){return Q1;}
	else if(m_x<0 && m_y>0){return Q2;}
	else{return Q3;}
}
template<typename T>
void points<T>::display(){
	std::cout<<m_x<<","<<m_y;
}
