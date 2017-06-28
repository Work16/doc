// a+b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;



int main()
{
	int a, b, n;
	int c = 0;
	cout << "enter a,b,n:";
	cin >> a >> b >> n;
	while (a > n || b > n)
	{
		cout << "missing";
		system("pause");
	
		return 0;
	}
	if (a == b)
	{
		cout << "c=" << a;

	}
	if (a < b)
	{
		cout << "c=" << a << endl;
		cout << "c=" << b << endl;
	}

	else {
		cout << "c=" << b << endl;
		cout << "c=" << a << endl;
	}
	if (a == b)
	{
		for (int i = 2; c + a < n;i++)
		{
			c = i*a;

			cout << "c=" << c << endl;
		}
	}
	
	
		if (a > b) {
			
			for (int i = 1;c+b < n;i++)
			{
				c = i*b;
				cout << "c=" << c << endl;
			}

			for (int i = 1;c + a < n;i++)
			{
				
				
				c = i*(a + b);
				cout << "c=" << c << endl;

				
			}
		}
	
	if (a < b) {

		for (int i = 1;c+a < n;i++)
		{
			c = i*a;
		cout << "c=" << c<<endl;
		}

		for (int i = 1;c + b < n;i++)
		{
			

			c = i*(a + b);
			cout << "c=" << c << endl;
			

			
		}	
	}

system("pause");
return 0;
}

