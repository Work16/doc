// matrix vip 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int c;
	int i = 0, j = 0;
	int n, m;
	cout << "n=" ;
	cin >> n,m;
	cout << "m=";
	cin >> m;
	cout << "enter matrix:";
	
	int **a = new int*[n];
	for (i;i < m;i++)
	{
		a[i] = new int[m];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cin >> a[i][j];
		}
	}
	for (j = 0;j < m;j++)
	{
		for (i = 0;i < n;i++)
		{
			if (a[i + 1][j]>a[i][j])
			{
				for (j = i = 0;j < m && i < n;j++ && i++)
					c = a[i + 1][j];
			}
			else {
				for (j = i = 0;j < m && i < n;j++ && i++)
					c = a[i][j];
			}

		}
		for (j = 0;j < m;j++)
		{
			for (i = 0;i < n;i++)
			{ 
				c = 0;

		
    
	
	system("pause");
    return 0;
}

