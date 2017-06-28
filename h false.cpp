// h false.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;



int main()
{
	double g = 9.81;
	double h, t;
	cout << "h=";
	cin >> h;
	t = sqrt(2*h / g);
	cout << "t=" << t << "\n";
	system("pause");
    return 0;
}

