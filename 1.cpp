// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
// за довжиною кола визначити його радіус і площу
double p = 3.14;
int c;


int main()
{
	cout << "line:";
	cin >> c;
	double r = c / (2 * p);
	double s = p * pow (r, 2);
	
	cout << "r=" << r << ", s:" << s <<"/n";

	
	// s=  p * pow(r;2);
	// c= 2*p*r
	
	system("pause");
	    return 0;
		
}

