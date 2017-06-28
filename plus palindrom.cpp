// plus palindrom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;

int main()
{
	const int n = 256;
	char a[n];
	cout << "enter your world :";
	cin >> a[n];
	int count = 0;
	for (int i = 0;i < size(a);i++)
	{

			for (int j = i++;0 < j < size(a);j++)
			{
				if (a[i] == a[j])
				{
					count++;
				}
			}
		}
	}
			if (count == size(a))
			{
				cout << a[n];
			}
			


	_getch();
    return 0;
}

