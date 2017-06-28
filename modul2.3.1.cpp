// modul2.3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	int count = 0, can = 0, boll = 0, bol = 0;
	int n;
	cout << "n=";
	cin >> n;
	int *ptr = 0;
	ptr = new int[n];
	for (int i = 0;i <= n;i++)
	{
		ptr[i] = rand() % 4;
	}
	for (int i = 0;i <= n;i++)
	{
		if (ptr[i]==0)
		{
			count++;
		}
		if (ptr[i] == 1)
		{
			can++;
		}
		if (ptr[i] == 2)
		{
			boll++;
		}
		if (ptr[i] == 3)
		{
			bol++;
		}
	}
	for (int i = 0;i <= count ;i++)
	{
		cout << 0 << "\n";
	}
	for (int i = 1;i <= can;i++)
	{
		cout << 1 << "\n";
	}
	for (int i = 2;i <= boll;i++)
	{
		cout << 2 << "\n";
	}
	for (int i = 3;i <= bol;i++)
	{
		cout << 3 << "\n";
	}
	system("pause");
    return 0;
}

