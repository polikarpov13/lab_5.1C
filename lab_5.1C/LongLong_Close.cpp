#include "LongLong_Close.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLong_Close::LongLong_Close()
	: LongLong_Base()
{ }

LongLong_Close::LongLong_Close(double a, double b)

	: LongLong_Base(a, b)

{}

LongLong_Close::LongLong_Close(const LongLong_Close& l)

	: LongLong_Base(l)

{}

void LongLong_Close::Compare()
{
	if (getOlder() + getYounger() == getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() != getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is not equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() > getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() < getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() >= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger/equal than  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() <= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less/equal than  " << getOlder() * getYounger() << " \n ";

}

LongLong_Close::operator string() const {
	stringstream sout;
	sout << "LongLong = " << this->getOlder() << " " << this->getYounger() << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const LongLong_Close& l) {
	out << (string)l;
	return out;
}

istream& operator >> (istream& in, LongLong_Close& l) {
	double a, b;
	cout << "Older : "; cin >> a;
	cout << "Younger : "; cin >> b;

	l.setOlder(a);
	l.setYounger(b);

	return in;
}

LongLong_Close LongLong_Close::operator + (LongLong_Close l) {
	LongLong_Close l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLong_Close LongLong_Close::operator * (LongLong_Close l) {
	LongLong_Close l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
