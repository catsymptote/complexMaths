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
template<class T> void cplx<T>::printCplx()
{
    std::cout << Re << " + " << Im << "i" << std::endl;
}
template<class T> void cplx<T>::printCplxPolar()
{
    std::cout << this->radius() << "e^i" << this->angle() << std::endl;
}


/// Non-overloaded maths functions
/// Functionality: https://en.wikipedia.org/wiki/Complex_number
template <class T>
double cplx<T>::radius()
{
    return abs(pow((pow(this->Re, 2) + pow(this->Im, 2)), 0.5));
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

template <class T>
cplx<T> cplx<T>::getSqrt(cplx<T> &x)
{
    T a = x.getRe();
    T b = x.getIm();

    cplx<T> z(
        sqrt((a + sqrt(pow(a, 2) + pow(b, 2)))/2),
        sgn(b)*sqrt((-a + sqrt(pow(a, 2) + pow(b, 2)))/2)
    );
    return z;
}

template <class T>
cplx<T> cplx<T>::getReciprocal(cplx<T> &x)
{
    T a = x.getRe();
    T b = x.getIm();

    cplx<T> z(
        a/(pow(a, 2) + pow(b, 2)),
        b/(pow(a, 2) + pow(b, 2))
    );
    return z;
}


/*
template <class T> cplx<T> add(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() + y.getRe(),
        x.getIm() + y.getIm()
    );
    return z;
}
template <class T> cplx<T> subtract(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() - y.getRe(),
        x.getIm() - y.getIm()
    );
    return z;
}
template <class T> cplx<T> multiply(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        x.getRe() * y.getRe() - x.getIm() * y.getIm(),
        x.getRe() * y.getIm() + x.getIm() * y.getRe()
    );
    return z;
}
template <class T> cplx<T> divide(cplx<T> &x, cplx<T> &y)
{
    cplx<T> z(
        (x.getRe() * y.getRe() + x.getIm() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2)),
        (y.getRe() * x.getIm() - x.getRe() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2))
    );
    return z;
}
*/
/// Sign function: https://en.wikipedia.org/wiki/Sign_function
template <class T> int cplx<T>::sgn(T x)
{
    if(x < 0)
        return -1;
    else if(x > 0)
        return 1;
    else
        return 0;
}


/// Because this? https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
template class cplx<int>;
template class cplx<float>;
template class cplx<double>;
