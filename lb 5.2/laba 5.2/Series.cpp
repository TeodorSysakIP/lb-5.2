
#include "pch.h"
#include "Series.h"
#include <cmath>

void S(const double x, const double eps, int& n, double& s)
{
    n = 0;
    double a = 1;
    s = a;

    do
    {
        n++;
        A(x, n, a);
        s += a;
    } while (fabs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
    double R = -x * x / n;
    a *= R;
}
