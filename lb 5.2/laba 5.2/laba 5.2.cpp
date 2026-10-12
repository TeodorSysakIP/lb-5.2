
#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "Series.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

namespace UnitTest52
{
    TEST_CLASS(SeriesTests)
    {
    public:

        
        TEST_METHOD(TestZero)
        {
            int n = 0;
            double s = 0;

            S(0.0, 1e-6, n, s);

            Assert::AreEqual(1.0, s, 1e-10);
        }

        TEST_METHOD(TestOne)
        {
            int n = 0;
            double s = 0;

            S(1.0, 1e-6, n, s);

            Assert::AreEqual(exp(-1.0), s, 1e-5);
        }

        
        TEST_METHOD(TestHalf)
        {
            int n = 0;
            double s = 0;

            S(0.5, 1e-6, n, s);

            Assert::AreEqual(exp(-0.25), s, 1e-5);
        }

        
        TEST_METHOD(TestNumberOfTerms)
        {
            int n = 0;
            double s = 0;

            S(1.0, 1e-6, n, s);

            Assert::IsTrue(n > 0);
        }
    };
}
