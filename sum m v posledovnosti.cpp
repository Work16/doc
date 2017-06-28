// sum m v posledovnosti.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], m,sum=0;
	cout << "m=";
	cin >> m;
	for (int i = 0;i < n;i++)
	{
		cout << "¬ведите " << i + 1 << " елемент масива:";
		while (!(cin >> a[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "¬ведите " << i + 1 << " елемент масива:";
		}
	}
	system("cls");
	cout << "***"<<"\n";
	for (int i = 0;i < n ;i++)
	{
		sum = 0;
		for (int j = 0;j < n-i ;j++)
		{
			sum += a[i + j];
			//cout << sum << endl;
			if (sum == m)
			{
				for (int f = i;f <= j+i;f++)
				{
					cout << a[f] << endl;
				}
				cout << "***"<< endl;
			}
		}
	}
	_getch();
    return 0;
}

 