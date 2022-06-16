#pragma once
#include <string>
#include "LongLong_Base.h"

using namespace std;

class LongLong_Close : private LongLong_Base
{
private:
	double older;
	double younger;
public:

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	LongLong_Close();
	LongLong_Close(double, double);
	LongLong_Close(const LongLong_Close&);

	void Compare();

	operator string() const;

	friend ostream& operator << (ostream&, const LongLong_Close&);
	friend istream& operator >> (istream&, LongLong_Close&);

	LongLong_Close operator + (LongLong_Close r);
	LongLong_Close operator * (LongLong_Close r);
};

