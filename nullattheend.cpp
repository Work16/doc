// nullattheend.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int count = 0;
	int n = 0;
	cout << "n=";
	cin >> n;
	int *a;
	a = new int[n];
	for (int i = 0;i < n;i++)
	{
		a[i] = rand() ;
		//cout << a[i] << "\n";
	}
	for (int i = 0;i < n;++i)
	{
		if (a[i] == 0)
		{
			count++;
		}
		else {
			cout << a[i] << "\n";
		}
	}

			for (int i = 0;i < count;i++)
			{
				cout << 0 << "\n";
			}
		system("pause");
    return 0;
}

