// symetric matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int kl = 0;
	int i = 0, j = 0;
	int n, m;
	cout << "n=";
	cin >> n, m;
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
	for (int i = j = 0; i < n && j < m;i++ && j++)
	{

		if (a[i][j] == a[j][i])
		{

			kl++;
		}
	}
		if (kl == i*j)
		{
			cout << "yes" << endl;
		}

		else
		{
			cout << "no" << endl;
		}
	
	
	system("pause");
    return 0;
}

