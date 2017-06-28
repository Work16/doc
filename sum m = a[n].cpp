// sum m = a[n].cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
/*void mat(char*a, int n, int i, int m)
{
	if (a[i] == m) return a[i];
	if (strlen a[n] == 0) return 0;

}*/


int main()
{
	 int j = 0;
	int count = 0;
	int sum = 0;
	int n = 0;
	cout << "n=";
	cin >> n;
	int *a;
	a = new int [n];
	
	for (int i = 0;i < n;i++)
	{
		a[i] = rand();
		cout << a[i] << "\n";
	}
	int m;
	cout << "m=";
	cin >> m;
	
	for (int i = 0;i < n;i++)
	{menu:
	if (a[i] == m)
	{
		cout << a[i];
		system("pause");
		return 0;
	}
	for (int i = 0;sum <= m;i++)
		{

			sum = a[i] + a[i + 1];
			count++;
		//	cout << sum << "\n";
			break;
		}
		for (int i = j;i <= count;i++)
		{
			cout << a[i] << "\n";
		}
		system("pause");
		return 0;


		if (sum > m)
		{
			j++;
			goto menu;
		}
}
	system("pause");
    return 0;
}

