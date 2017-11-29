#include "cplx.h"
#include <iostream>
#include <cmath>

/// Attributes
float Re;
float Im;


/// Constructor and destructor
cplx::cplx(float Re, float Im)
{
    //ctor
    this->Re = Re;
    this->Im = Im;
}

cplx::~cplx()
{
    //dtor
}


/// Set functions
void cplx::setRe(float Re)
{
    this->Re = Re;
}
void cplx::setIm(float Im)
{
    this->Im = Im;
}


/// Get functions
float cplx::getRe()
{
    return Re;
}
float cplx::getIm()
{
    return Im;
}


/// Print function
void cplx::printCplx()
{
    std::cout << Re << " + " << Im << "i" << std::endl;
}


/// Maths functions (operator overloading)
cplx operator+(cplx &x, cplx &y)
{
    cplx z(
        x.getRe() + y.getRe(),
        x.getIm() + y.getIm()
    );
    return z;
}
cplx operator-(cplx &x, cplx &y)
{
    cplx z(
        x.getRe() - y.getRe(),
        x.getIm() - y.getIm()
    );
    return z;
}
cplx operator*(cplx &x, cplx &y)
{
    cplx z(
        x.getRe() * y.getRe() - x.getIm() * y.getIm(),
        x.getRe() * y.getIm() + x.getIm() * y.getRe()
    );
    return z;
}
cplx operator/(cplx &x, cplx &y)
{
    cplx z(
        (x.getRe() * y.getRe() + x.getIm() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2)),
        (y.getRe() * x.getIm() - x.getRe() * y.getIm()) / (pow(y.getRe(), 2) + pow(y.getIm(), 2))
    );
    return z;
}
