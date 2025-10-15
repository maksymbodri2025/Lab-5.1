#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-5.1/Lab-5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p = 1;
			double q = 2;
			double k_result = k(p + sqrt(q), q - sqrt(p));
			Assert::AreEqual((double)0.453082, k_result, 0.00001);
		}
	};
}
