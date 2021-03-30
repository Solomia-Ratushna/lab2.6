#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.6/Rational.h"
#include "../lab2.6/Rational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational::Pair a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
