// matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


int main()
{
	const int n = 3, m = 2;
	int a[m][n],b[n],d=3;
	for (int i = 0;i < n;i++)
	cin >> b[i];
	cout << "\n***\n";
	for (int i = 0;i < 1;i++)
		for (int j = 0;j < 1;j++)
			a[i][j] = b[i];
	for (int i = 1;i < m;i++)
		for (int j = 1;j < n;j++)
			a[i][j] = b[j]*(i+1)*d;
	for (int i = 0;i < m;i++)
	{
		cout << "\n";
		for (int j = 0;j < n;j++)
			cout << setw(3) << a[i][j];
	}
	cout << "\n";
	_getch();
    return 0;
}

