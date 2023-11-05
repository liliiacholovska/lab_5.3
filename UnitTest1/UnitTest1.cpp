#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (exp(x) + sin(x)) / ((pow(cos(x), 2) + 1));

			double actual = k(x);

			Assert::AreEqual(expected, actual, 0.001);
		}
	};
}