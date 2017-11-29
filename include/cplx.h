#ifndef cplx_H
#define cplx_H

#include <cmath>

// Complex number (cplx) and complex maths functions.

template <class T>
class cplx
{
    public:
        cplx();
        cplx(T Re, T Im);       // Constructor
        virtual ~cplx();        // Destructor

        void setRe(T Re);       // Set real part of cplx.
        void setIm(T Im);       // Set imaginary part of cplx.

        T getRe();              // Get real part of cplx.
        T getIm();              // Get imaginary part of cplx.

        void printCplx();       // Print complex number.

        T radius();             // Return radius of cplx.




    private:
        T Re;                   // Real part of cplx.
        T Im;                   // Imaginary part of cplx.


    /// Friendly functions
    /*
    friend cplx operator+(cplx &x, cplx &y);
    friend cplx operator-(cplx &x, cplx &y);
    friend cplx operator*(cplx &x, cplx &y);
    friend cplx operator/(cplx &x, cplx &y);
    */
};


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
#endif // cplx_H
