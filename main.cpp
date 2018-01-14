#include <iostream>

#include "cplx.h"


int main()
{
    double aR = 2;
    double aI = 3;
    double bR = 4;
    double bI = -1;

    cplx<double> *x;
    x = new cplx<double>(aR, aI);
    std::cout << "x:\t\t";
    x->printCplx();

    cplx<double> *y;
    y = new cplx<double>(bR, bI);
    std::cout << "y:\t\t";
    y->printCplx();


    std::cout << "Radius x:\t" << x->radius() << std::endl;
    std::cout << "Radius y:\t" << y->radius() << std::endl;

    std::cout << "Angle x:\t" << x->angle() << std::endl;
    std::cout << "Angle y:\t" << y->angle() << std::endl;

    cplx<double> *z1 = new cplx<double>;
    *z1 = *x + *y;
    std::cout << "x+y:\t\t";
    z1->printCplx();

    cplx<double> *z2 = new cplx<double>;
    *z2 = *x - *y;
    std::cout << "x-y:\t\t";
    z2->printCplx();

    cplx<double> *z3 = new cplx<double>;
    *z3 = *x * *y;
    std::cout << "x*y:\t\t";
    z3->printCplx();

    cplx<double> *z4 = new cplx<double>;
    *z4 = *x / *y;
    std::cout << "x/y:\t\t";
    z4->printCplx();

    cplx<double> *z5 = new cplx<double>;
    *z5 = *x;
    std::cout << "Conjugate of x:\t";
    *z5 = z5->conjugate();
    z5->printCplx();

    return 0;
}
