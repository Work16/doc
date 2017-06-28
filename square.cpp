// square.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	const int  n = 100, m = 100;
	int count = 0;
	//int a[n][m];
	for (int i = 0;i < n;i+=2)
	{
		//a[0][0] = true;
		for (int j = 0;j < m;j+=2)
		{
			//	a[i][j] = true;
			count++;
		}
	}
	for (int i = 1;i < n-1;i += 2)
	{
		//a[1][1] = true;
		for (int j = 1;j < m-1;j += 2)
		{
          //a[i][j] = true;
			count++;
		}
	}
	cout << count  << "\n";
	_getch();
    return 0;
}

