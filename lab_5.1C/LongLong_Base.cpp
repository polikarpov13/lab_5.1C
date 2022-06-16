#include "LongLong_Base.h"
#include <iostream> 
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLong_Base::LongLong_Base() {
	older = 0;
	younger = 0;
}

LongLong_Base::LongLong_Base(double a, double b) {
	older = a;
	younger = b;
}

LongLong_Base::LongLong_Base(const LongLong_Base& l) {
	older = l.older;
	younger = l.younger;
}

LongLong_Base::~LongLong_Base() { }

LongLong_Base::operator string() const {
	stringstream sout;
	sout << "LongLong = " << older << " " << younger << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const LongLong_Base& l) {
	out << (string)l;
	return out;

}

istream& operator >> (istream& in, LongLong_Base& l) {
	cout << "Older : "; in >> l.older;
	cout << "Younger : "; in >> l.younger;

	return in;

}
