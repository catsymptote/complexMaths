#include "cplx.h"
#include <iostream>
#include <cmath>





/// Attributes


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


/// Maths functions (operator overloading)
// Not working like this because reasons?
// Created as non-friend-functions in header file outside of class.
/*
template <class T> cplx<T> operator+(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() + y.getRe(),
        x.getIm() + y.getIm()
    );
    return z;
}
template <class T> cplx<T> operator-(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() - y.getRe(),
        x.getIm() - y.getIm()
    );
    return z;
}
template <class T> cplx<T> operator*(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() * y.getRe() - x.getIm() * y.getIm(),
        x.getRe() * y.getIm() + x.getIm() * y.getRe()
    );
    return z;
}
template <class T> cplx<T> operator/(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        (x.getRe() * y.getRe() + x.getIm() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2)),
        (y.getRe() * x.getIm() - x.getRe() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2))
    );
    return z;
}
*/


/// Non-overloaded maths functions
template <class T>
T cplx<T>::radius()
{
    return pow((pow(this->Re, 2) + pow(this->Im, 2)), 0.5);
}


/// Because this: https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
template class cplx<int>;
template class cplx<float>;
template class cplx<double>;
