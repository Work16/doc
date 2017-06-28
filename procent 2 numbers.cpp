// procent 2 numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	double d = (a / b) * 100;
	cout << "Procent:" << d << "\n";
	_getch();
    return 0;
}

