// lessonwhile if for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	// для дійсного числа х 
	//4 : +-*
	//обчислити 2х^4+3x^3+4x^2-5x+6
	int x ;
	cout << "x=";
	cin >> x;
     int p = x;
	int z;
	if (x = 0 ) int z=6;
	//else  p = p*x;
		//z = 6 - 5 * x + 4 * x*p + 3 * x*p + 2 * x*p;
	while (x != 0);
		
	{
		z = 6 - 5 * x + 4 * x*p + 3 * x*p + 2 * x*p;

		p = p*x;

	}
	cout << "z=" << z;
	system("pause");

    return 0;
}

