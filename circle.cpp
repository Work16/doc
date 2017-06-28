// circle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	double c ,s,r;
	cout << "c=";
	cin >> c;
	r = c / 2;
	cout << "r=" << r<<"\n";
	s = r*r;
	cout << "s=" << s<<"\n";
	system("pause");
    return 0;
}

