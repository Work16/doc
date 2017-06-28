// nuull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int n = 0;
	cout << "n=";
	cin >> n;
	int *a;
	a = new int[n];
	for (int i = 0;i < n;i++)
	{
		a[i] = rand()  ;
		//cout << a[i] << "\n";}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n-1;j++)
		{
			if (a[j] == 0)
			{
				a[j] = a[j + 1];
				a[j + 1] = 0;
			}
		}
	}
	for (int i = 0;i< n;i++)
	{
		cout << a[i] << "\n";
	}
	system("pause");
    return 0;
}

