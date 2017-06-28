// binariumfx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "math.h"
using namespace std;
int  promt_menu_iteam()
{
	int variant;
    cout << "choose the variant " << endl;
	cout << "1.y=k*x+b\n"
		<< "2.y=a*x^2+c*x+d\n"
		<< "3.y=sin f*x\n" << endl;
	cin >> variant;
	return variant;
}
int main(int args , char* argv[])
{
	int x = 0,y;
	int variant = promt_menu_iteam();
	switch (variant)
	{case 1:
		double  k, b,y;
		cout << "k=" << "b=" << endl;
		cin >> k >> b ;
		double  y = k*x + b;
		void _prover();
		system("pause");
		return 0;
	
	case 2:
		double a , b, c,y;
		cout << "a=" << "b=" << "c=" << endl;
		cin >> a >> b >> c;
		double y = a*pow(x, 2) + b*x + c;
		void _prover();
		system("pause");
		 return 0;
	case 3:

		double  a,y;
		cout << "a=";
		cin >> a;
		double y = sin (a*x);
		void _prover();
		system ("pause");
		return 0;
	}
	
    return 0;
}
void _prover(int low, high,mid)
{
		low = 0
			high = N - 1
			while (low <= high) 
			{
				mid = (low + high) / 2
					if (y[mid] > value)
						high = mid - 1
					else
						if (y[mid] < value)
							low = mid + 1
						else
							return mid // знайдено
			}
		return -1 // не знайдено
	}

}