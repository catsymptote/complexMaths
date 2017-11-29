#include <iostream>

#include "cplx.h"


int main()
{
    cplx x(2, 3);
    cplx y(4, -1);

    cplx z1 = x+y;
    cplx z2 = x-y;
    cplx z3 = x*y;
    cplx z4 = x/y;

    z1.printCplx();
    z2.printCplx();
    z3.printCplx();
    z4.printCplx();

    return 0;
}
