#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_6.2_it/PR_6.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062it
{
    TEST_CLASS(UnitTest062it)
    {
    public:
        TEST_METHOD(TestInverseOdd)
        {
            int a[] = { 1, 2, 3, 4, 5 };
            Inverse(a, 5);
            Assert::AreEqual(5, a[0]);
            Assert::AreEqual(4, a[1]);
            Assert::AreEqual(3, a[2]);
            Assert::AreEqual(2, a[3]);
            Assert::AreEqual(1, a[4]);
        }

        TEST_METHOD(TestInverseEven)
        {
            int a[] = { 10, 20, 30, 40 };
            Inverse(a, 4);
            Assert::AreEqual(40, a[0]);
            Assert::AreEqual(30, a[1]);
            Assert::AreEqual(20, a[2]);
            Assert::AreEqual(10, a[3]);
        }
    };
}
