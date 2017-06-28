// n(a+b).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <stdlib.h>
//int sum(int n);
using namespace std;


int sum(int  n)
{
for (int i = 0; i <=n; i++)
{
	if (n == 0) return 0;
	//if (n == 1) return 1;
	
	if (n > 0)
	{
		while (i = n)
		{

			n = (n-1) + (n - 2);

			//system("pause");
			return n + sum(n-2);
			
		}
	}
		cout << n << endl;

	}
return n;
}

int main()
{
	int n=100 ;
	cout << "n=";
	cin >> n;
	cout << sum(n) << endl;
	system("pause");
	return 0;
}