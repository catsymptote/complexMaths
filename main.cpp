#include <iostream>

#include "cplx.h"


int main()
{
    float aR = 2;
    float aI = 3;
    float bR = 4;
    float bI = -1;

    //cplx <float> x(aR, aI);
    //cplx<float> x;
    //x.setRe(aR);
    //x.setIm(aI);
    //cplx <float> y(bR, bI);
    cplx<float> *x;
    x = new cplx<float>(aR, aI);

    cplx<float> *y;
    y = new cplx<float>(bR, bI);

    //cplx <float> *x;
    //cplx <float> *y;
    //x = new <float> cplx(aR, aI);
    //y = new <float> cplx(bR, bI):

    std::cout << "rx = " << x->radius() << std::endl;
    std::cout << "ry = " << y->radius() << std::endl;

    cplx<float> *z1 = new cplx<float>;
    *z1 = *x + *y;
    z1->printCplx();

    cplx<float> *z2 = new cplx<float>;
    *z2 = *x - *y;
    z2->printCplx();

    cplx<float> *z3 = new cplx<float>;
    *z3 = *x * *y;
    z3->printCplx();

    cplx<float> *z4 = new cplx<float>;
    *z4 = *x / *y;
    z4->printCplx();

    return 0;
}
