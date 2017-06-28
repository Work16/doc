// output n=.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;

int main()
{
	char e;
	do
	{ 
	int n;
	cout << "n=";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "do you want to continue (y/n)?";

	} while (cin >> e &&  e == 'y');
	
		cout << "goodbye";
	
	_getch();
    return 0;
}

