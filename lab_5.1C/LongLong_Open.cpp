#include "LongLong_Open.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLong_Open::LongLong_Open()
	: LongLong_Base()
{ }

LongLong_Open::LongLong_Open(double a, double b)

	: LongLong_Base(a, b)

{}

LongLong_Open::LongLong_Open(const LongLong_Open& l)

	: LongLong_Base(l)

{}

void LongLong_Open::Compare()
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

LongLong_Open LongLong_Open::operator + (LongLong_Open l) {
	LongLong_Open l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLong_Open LongLong_Open::operator * (LongLong_Open l) {
	LongLong_Open l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
