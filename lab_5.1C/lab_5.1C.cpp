#include "LongLong_Open.h"
#include "LongLong_Close.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

class olderNotZero {};

void checkOlder(LongLong_Open l) {
    if (l.getOlder() < 0)
        throw olderNotZero();
}

int main()
{
    LongLong_Open lo;

    cin >> lo;

    checkOlder(lo);

    cout << lo;

    cout << "Addition : " << lo.getOlder() + lo.getYounger() << endl;
    cout << "Multiplication : " << lo.getOlder() * lo.getYounger() << endl;
    cout << "Comparing : ";
    lo.Compare();

    LongLong_Close lc;

    cin >> lc;
    cout << lc;

    cout << "Addition : " << lc.getOlder() + lc.getYounger() << endl;
    cout << "Multiplication : " << lc.getOlder() * lc.getYounger() << endl;
    cout << "Comparing : ";
    lc.Compare();
}
