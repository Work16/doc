// massive 100 100.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int  coun = 0;
	 int count = 0;
	char a[100][100];
	a[1][1] =1;
	for (int i = 0;i < 100;i++)
	{
		for (int j = 0;j < 100;j++)
		{ 
			if (a[i][j]==1)
			{
				a[i - 1][j] = 1;
				a[i + 1][j] = 1;
				a[i][j - 1] = 1;
				a[i][j + 1] = 1;
				a[i + 1][j + 1] = 1;
				a[i - 1][j + 1] = 1;
				a[i + 1][j - 1] = 1;
				a[i - 1][j - 1] = 1;
				count++;
			}
			coun = count - 8* i*j;
		}
	}
	cout << "coun :" << coun;
	system("pause");
    return 0;
}

