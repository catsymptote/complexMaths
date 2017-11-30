#ifndef cplx_H
#define cplx_H

#include <cmath>

// Complex number (cplx) and complex maths functions.

template <class T>
class cplx
{
    public:
        cplx();
        cplx(T Re, T Im);           // Constructor
        virtual ~cplx();            // Destructor

        void setRe(T Re);           // Set real part of cplx.
        void setIm(T Im);           // Set imaginary part of cplx.

        T getRe();                  // Get real part of cplx.
        T getIm();                  // Get imaginary part of cplx.

        void printCplx();           // Print complex number in Cartesian form.
        void printCplxPolar();      // Print complex number in polar form.

        double radius();            // Return radius of cplx.
        double angle();             // Return angle of cplx.
        cplx getSqrt(cplx<T> &x);   // Return square of cplx.
        cplx getReciprocal(cplx &x);       // Return cplx reciprocal.

        cplx conjugate();           // Return the conjugate of cplx.

        /*
        /// Operator overloading
        cplx operator+();
        cplx operator-();
        cplx operator*();
        */


    private:
        double pi = 3.141592653589793238463;
        T Re;           // Real part of cplx.
        T Im;           // Imaginary part of cplx.

        int sgn(T x);   // Sign function.


    /// Friendly functions
    /*
    friend cplx operator+(cplx &x, cplx &y);
    friend cplx operator-(cplx &x, cplx &y);
    friend cplx operator*(cplx &x, cplx &y);
    friend cplx operator/(cplx &x, cplx &y);
    */
    //friend cplx add(cplx &x, cplx &y);
};


/// Math lib functions
/*
//template <class T> friend cplx<T> add(cplx<T> &x, cplx<T> &y);
template <class T> cplx<T> subtract(cplx<T> &x, cplx<T> &y);
template <class T> cplx<T> multiply(cplx<T> &x, cplx<T> &y);
template <class T> cplx<T> divide(cplx<T> &x, cplx<T> &y);
*/


/// Templated operator overloading functions
template <class T> cplx<T> operator+(cplx<T> &x, cplx<T> &y)
{
    //return add(x, y);
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
