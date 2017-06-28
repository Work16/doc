// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

float f1(float x, float k, float b) {
	return k*x + b;
}

float f2(float x, float k, float b) {
	return k* pow (x,2)+b ;
}

float f3 (float k, float x,float b)
{
	return sin(k*x)+b;
}
float f(int fun, float x, float k, float b) {
	switch (fun) {
	case 1:
		return f1(x, k, b);
	case 2:
		return f2(x, k, b);
		case 3:
		return 	f3(k, x,b);
		break;
	}
	return 0;
}


int main() 
{
	int fun;
	float eps = 0.1;
	float k, b = 0, x = 0,f0;
changeFun:
	cout << "switch function:";
	cout << "1. y=k*x+b" << "\n"
		<< "2. y= k* x^2+b" << "\n"
		<< "3. y= sin a*x + b" << "\n";
	cin >> fun;
	if (fun < 1 || fun > 3) {
		cout << "mistake!!!"<<"\n";
		goto changeFun;
	}
   cout << "k=";
	cin >> k;
	cout << "b=";
	cin >> b;
	//int y = k*x + b;
	float m,  n;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	//x = (m + n) / 2;
	/*
	if (x == n && y == 0)
	{
		cout << "n=" << n;
	}

	if (x == m && y == 0)
	{
		cout << "m=" << m;
	}
	*/
	//if (y != 0 || (m + n) > eps)
	//{
		//x = (m + n) / 2;

	if (m < n) {
		cout << "m < n, m should be >n ";
		system("pause");
		return 0;
	}
	

	while ((fabs(m - n))>= eps)
	{
		float x = n + fabs(m - n) / 2;

		float y0 = f(fun, x, k, b);
		float yN = f(fun, n, k, b);
		float yM = f(fun, m, k, b);

		//cout << "x=" << x << "\n";
		//float y1 = f(fun, x , k, b);
		//cout << "y1=" << y1 << "\n";
		//float y2 = f(fun, x - eps, k, b);
		//cout << "y2=" << y2 << "\n";

		if (y0 == 0)
		{
			m = x;
			n = x;
		}
		else if (y0*yN < 0)
		{
			m = x;
		}
		else if (y0*yM < 0)
		{
			n = x;
		}

	}
	
		cout << "low=" << m << "\n";
		cout << "high=" << n << "\n";
	
	
	system ("pause");
    return 0;
}

