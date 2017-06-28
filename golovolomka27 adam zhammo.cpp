// golovolomka27 adam zhammo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include "iostream"
using namespace std;

char sum(int s, int i, char* a, char u,int n)
{
	for (i = 0;i < n;i++)
	{
		u = a[i] + sum(s, i++, a, u, n);
	}
	return u;
}

char  diference(int s, int i, char* a, int u, int n)
{
	for (i = 0;i < n;i++)
	{
		u = a[i] - diference (s, i++, a, u, n);
	}
	return u;
}
int main()
{
	int i = 0;
	int  n, o = 0;
	char u = 0;
	men :
	cout << "n=";
	cin >> n;
	if (0 > n)
	{
		goto men;
	}
	int *a = 0;
	a = new int [n];
	for (int i = 0;i < n;i++)
	{
		a[i] = rand() % 100;
		while (a[i] < 10)
		{
			a[i] = rand() % 100;
		}
		cout << a[i] << "\n";
	}
	int s;
menu:
	cout << "s=";
	cin >> s;
	if (10>s>100)
	{ 
		goto menu;
	}
	/*for (int i = 0;i < n;i ++)
	{
		u = sum (s,i,*a,u,n)
		
	}
	if (u = s )
	{
		o++;
}for (int i = 0;i < n;i++)
{
	u = a[i] - a[i + 1] +a[i+1];

}*/
	u = sum(s, i,  a, u, n);
if (u = s)
{
	cout << "yes" << "\n";
}
/*if (o != 0)
{
	cout << "yes"<<"\n";
}*/
else
{
	cout << "no"<<"\n";
}
	system("pause");
    return 0;
}

