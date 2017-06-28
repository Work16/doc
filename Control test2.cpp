// Control test2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream "
#include "math.h"
using namespace std;

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	int k=1, l=1, m = 1;
	for (int i = 1;i < n ;i++)
	{
		int a = pow(2, k);
		int b = pow(3, l) ;
		int c =	pow(5, m) ;
		if ( c > b)
		{
			if (b > a)
			{ 
				cout << a<<"\n";
				k++;
			}
			else
			{
				cout << b << "\n";
				l++;
			}
		}
		else 
		{
			if (c < a) {
				cout << c << "\n";
				m++;
			}
			else
			{
				cout << a << "\n";
				k++;
			}
		}

		//cout << c<<endl;
	}
	system("pause");
    return 0;
}

