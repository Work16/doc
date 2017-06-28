// modul2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

double power(double x, double n)
{
	if (x == 0) return 0;
	if (n == 0) return 1;
	if (n < 0) return 1.0/power(x ,(-n));
	else return x*power(x ,n-1);
}

int main()
{
	double x, n, d = 1;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
		for (int i=0;i < n || i<(-n);i++)
	{
		d = power(x, n);
	}
	cout << "x^n=" << d<< "\n";
	system("pause");
    return 0;
}

