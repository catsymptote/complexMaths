#ifndef cplx_H
#define cplx_H

// Complex number (cplx) and complex maths functions.

class cplx
{
    public:
        cplx(float Re, float Im);   // Constructor
        virtual ~cplx();            // Destructor

        void setRe(float Re);       // Set real part of cplx.
        void setIm(float Im);       // Set imaginary part of cplx.

        float getRe();              // Get real part of cplx.
        float getIm();              // Get imaginary part of cplx.

        void printCplx();           // Print complex number


    private:
        float Re;                   // Real part of cplx.
        float Im;                   // Imaginary part of cplx.


    /// Friendly functions
    friend cplx operator+(cplx &x, cplx &y);
    friend cplx operator-(cplx &x, cplx &y);
    friend cplx operator*(cplx &x, cplx &y);
    friend cplx operator/(cplx &x, cplx &y);
};

#endif // cplx_H
