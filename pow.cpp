// pow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;

int main()
{
int a = 2, b = 8; 
 long double  c=a , d=b ;
	for (int i = 1;i <75 ;i++)
		c*= a;
	for (int i = 1;i < 4;i++)
		d *= b;
long double f= (c / (d - 3));
cout << f - long long(f) << endl;
	_getch();
    return 0;
	/*int n;
	cout << "n=";
	if (cin >> n)
	for (int i = 0;i < n; i++)
	cout << "hello world\n";
	else
	cout << "Error" << endl;
	_getch();
	return 0;*/
}

	