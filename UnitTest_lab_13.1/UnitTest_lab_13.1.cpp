#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_13.1/lab_13.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab131
{
	TEST_CLASS(UnitTestlab131)
	{
	public:

		TEST_METHOD(TestnsDodMethod)
		{
			nsVar::x = 6;
			nsVar::n = 2;
			a = x / n;
			double expected = 3;
			Assert::AreEqual(a, expected);
		};
	};
}
