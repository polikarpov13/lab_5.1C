#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/5/lab_5.1C/lab_5.1C/LongLong_Base.cpp"
#include "../../../../../політех/ооп/5/lab_5.1C/lab_5.1C/LongLong_Open.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong_Open lo(15, 12);
			double a = lo.getOlder();
			Assert::AreEqual(15.0, a);
		}
	};
}
