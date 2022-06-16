#pragma once
#include <string>
#include "LongLong_Base.h"

using namespace std;

class LongLong_Open : public LongLong_Base
{
public:
	LongLong_Open();
	LongLong_Open(double, double);
	LongLong_Open(const LongLong_Open&);

	void Compare();

	LongLong_Open operator + (LongLong_Open r);
	LongLong_Open operator * (LongLong_Open r);
};

