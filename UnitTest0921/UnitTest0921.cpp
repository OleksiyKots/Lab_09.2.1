#include "pch.h"
#include "CppUnitTest.h"
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define POW(x, n) (pow((x), (n)))

namespace MyTests
{
    TEST_CLASS(MyMacrosTests)
    {
    public:

        TEST_METHOD(TestMin)
        {
            Assert::AreEqual(5, MIN(5, 10));
            Assert::AreEqual(-10, MIN(-5, -10));
            Assert::AreEqual(0, MIN(0, 0));
            Assert::AreEqual(-5, MIN(-5, 5));
        }

        TEST_METHOD(TestMax)
        {
            Assert::AreEqual(10, MAX(5, 10));
            Assert::AreEqual(-5, MAX(-5, -10));
            Assert::AreEqual(0, MAX(0, 0));
            Assert::AreEqual(5, MAX(-5, 5));
        }

        TEST_METHOD(TestAbs)
        {
            Assert::AreEqual(5, ABS(-5));
            Assert::AreEqual(5, ABS(5));
            Assert::AreEqual(0, ABS(0));
        }

        TEST_METHOD(TestPow)
        {
            Assert::AreEqual(8.0, POW(2, 3));
            Assert::AreEqual(1.0, POW(5, 0));
            Assert::AreEqual(0.0, POW(0, 5));
        }
    };
}
