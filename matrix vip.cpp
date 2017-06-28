// matrix vip.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{//int count = 0; 
	int c = 0;
	//int kl = 0;
//	  int count = 0;
	int i = 0, j = 0;
	int n, m;
	cout << "n=";
	cin >> n;
	cout << "m=";
	cin >> m;
	cout << "enter matrix:";
	//int ** a = (int**) new int[n][m];
//int a[n][m];
	int **a = new int*[n];
	for (i;i < m;i++)
	{
		a[i] = new int[m];
	}
	/*const int n = 2;
	const int m = 3;
	int  a[n][m] ;*/
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
			cin >> a[i][j];
	}
	static int count = 0;
	for (int i = 0;i < n;i++)
	{
			
		int kl = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[i][j + 1] > a[i][j])
			{
				kl++;
			//	cout << "kl=" << kl << "\n";
			}


		}
		if (kl == (m-1))
		{
			count++;
			//cout << "count =" << count << "\n";
		}
	}
     cout << "count =" << count<<"\n";
	
   system("pause");
    return 0;
}

