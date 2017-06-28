// sum of a and b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	int a, b,sum=0,n;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "n=";
	cin >> n;
	system("cls");
	for (int i = 0;i < n/2;i++)
	{
		if (sum + a > sum + b)
		{
		    cout << sum + b <<endl;
			cout << sum + a << endl;
			sum += b;
		}
		else
		{
			cout << sum + a << endl;
			cout << sum + b << endl;
			sum += a;
		}
	}
	_getch();
    return 0;
}

