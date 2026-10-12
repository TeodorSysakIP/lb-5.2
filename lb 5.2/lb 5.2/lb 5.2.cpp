// Лабораторна робота № 5.2
// Варіант 13
// 1-й спосіб

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;


    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(12) << "exp(-x^2)" << " |"
        << setw(12) << "S" << " |" << setw(5) << "n" << " |" << endl;
    cout << "-----------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        S(x, eps, n, s);
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << exp(-x * x) << " |"
            << setw(12) << setprecision(5) << s << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }
    cout << "-----------------------------------------------" << endl;
    return 0;
}


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

// Лабораторна робота № 5.2
// Варіант 13
// 2-й спосіб
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//double S(const double x, const double eps, int& n, double s);
//double A(const double x, const int n, double a);
//
//int main()
//{
//    double xp, xk, x, dx, eps, s = 0;
//    int n = 0;
//
//    cout << "xp = "; cin >> xp;
//    cout << "xk = "; cin >> xk;
//    cout << "dx = "; cin >> dx;
//    cout << "eps = "; cin >> eps;
//
//    cout << fixed;
//    cout << "-----------------------------------------------" << endl;
//    cout << "|" << setw(7) << "x" << " |" << setw(12) << "exp(-x^2)" << " |"
//        << setw(12) << "S" << " |" << setw(5) << "n" << " |" << endl;
//    cout << "-----------------------------------------------" << endl;
//
//    x = xp;
//    while (x <= xk)
//    {
//        s = S(x, eps, n, s);
//        cout << "|" << setw(7) << setprecision(2) << x << " |"
//            << setw(12) << setprecision(5) << exp(-x * x) << " |"
//            << setw(12) << setprecision(5) << s << " |"
//            << setw(5) << n << " |" << endl;
//        x += dx;
//    }
//    cout << "-----------------------------------------------" << endl;
//    return 0;
//}
//
//
//double S(const double x, const double eps, int& n, double s)
//{
//    n = 0;
//    double a = 1;      
//    s = a;
//    do
//    {
//        n++;
//        a = A(x, n, a);    
//        s += a;
//    } while (fabs(a) >= eps);
//    return s;
//}
//
//
//double A(const double x, const int n, double a)
//{
//    double R = -x * x / n;
//    a *= R;
//    return a;
//}