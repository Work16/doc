// algoryfm markova.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n=256;
	char  *a;
	a = new char[n];
	cin.get(a, n);
	for (int i = 0;i < n;i++)
	{
		if (a[i] == 'a')
		{
			for (int j = i;j < n;j++)
			{
				a[j] = a[j + 1];
				i--;
			}
			n--;
		}
	}
	cout << "****\na:" << a << "\nn="<<n<<"\n";
	system("pause");
    return 0;
}

