#pragma once
#include <string> 

using namespace std;

class LongLong_Base
{
private:
	double older;
	double younger;
public:

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	LongLong_Base();
	LongLong_Base(double, double);
	LongLong_Base(const LongLong_Base&);
	~LongLong_Base();

	operator string() const;

	friend ostream& operator << (ostream&, const LongLong_Base&);
	friend istream& operator >> (istream&, LongLong_Base&);


};

