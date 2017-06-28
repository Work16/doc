// operations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	char a[7] = { 1,2,3,4,5,6 };
	char b[100] = {};
	/*for (int i = 0;i < size(a);i++)
	{
		b[i] = a[i];
	}*/
	for (int i = 0;i <7;++i)
	{ 
		a[i] = a[i] + a[i + 1];
		cout << a[i] << "\n";
		if (a[i] = 35)
		{
			cout << a[i] << "+" << a[i ++] << "=" << 35;
       }
		else {
			if (a[i] > 35) {
				i--;
				while (a[i] > 35)
				{
					a[i] = a[i] - a[i --];
					cout << a[i] << "\n";
				}
			}
			else {

			}
		}
	}
	system("pause");
    return 0;
}

