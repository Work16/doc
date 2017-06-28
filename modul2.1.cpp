// modul2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	double p = 180;
	double x, y;
	 cout << "x=";
	cin >> x;
	cout << "y=";
		cin >> y;
	double r, q=0;
	if (-p < q < p);
	{
		r = sqrt((x*x) + (y*y));
		q = x / y;
		if (q < 0)
		{
			q = fabs(x / y) + p;
		}
	} 
	cout << "r=" << r << "\n" << "q=" << q << "\n";
	system("pause");
    return 0;
}

