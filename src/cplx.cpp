#include "cplx.h"
#include <iostream>
#include <cmath>


/// Constructor and destructor
template<class T>
cplx<T>::cplx()
{
    //ctor
}
template<class T>
cplx<T>::cplx(T Re, T Im)
{
    this->Re = Re;
    this->Im = Im;
}
template<class T>
cplx<T>::~cplx()
{
    //dtor
}


/// Set functions
template<class T>
void cplx<T>::setRe(T Re)
{
    this->Re = Re;
}
template<class T>
void cplx<T>::setIm(T Im)
{
    this->Im = Im;
}


/// Get functions
template<class T>
T cplx<T>::getRe()
{
    return Re;
}
template<class T>
T cplx<T>::getIm()
{
    return Im;
}


/// Print function
template<class T>
void cplx<T>::printCplx()
{
    std::cout << Re << " + " << Im << "i" << std::endl;
}


/// Non-overloaded maths functions
template <class T>
double cplx<T>::radius()
{
    return pow((pow(this->Re, 2) + pow(this->Im, 2)), 0.5);
}
template <class T>
double cplx<T>::angle()
{
    return (360*2*pi)*atan((double)Re / (double)Im);
}
template <class T>
cplx<T> cplx<T>::conjugate()
{
    return cplx(this->Re, -this->Im);
}


/// Because this: https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
template class cplx<int>;
template class cplx<float>;
template class cplx<double>;
