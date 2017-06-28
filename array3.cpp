// array3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	/*const int n = 6;
	int a[n],k,l;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	cout << "\n***\n";
	cout << "enter k and l :\n";
	cin >> k >> l;
	cout << "\n***\n";
	int j = l-1 ;
	for (int i = k+1 ;i < l-1 ;i++)
	{
		int t = a[j];
		a[j] = a[i];
		a[i] = t;
		j--;
	}
	for (int i = 0;i < n;i++)
		cout << a[i] << " ";
	cout << "\n";*/
	/*const int n = 6;
	int a[n], max = -159, min = 159,maxel=-159,minel=159;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	cout << "\n***\n";
	for (int i = 0;i < n;i++)
	{
		if (a[i] > maxel)

		{
			max = i;
			maxel = a[i];
		}
		if (a[i] < minel)
		{
			min = i;
			minel = a[i];
		}
	}
	if (min > max)
		for (int i = max + 1;i < min;i++)

		{
			swap(a[i], a[min-1]);
			min--;
		}
	else
		for (int i = min + 1;i < max ;i++)

		{
			swap(a[i],a[max-1]);
	max--;
		}
	for (int i = 0;i < n;i++)
		cout << a[i] << " ";
	cout << "\n";*/
	const int n = 4;
	int a[n];
	for (int i = n;i > 0;i++)
		cin >> a[i];
	cout << "\n***\n";
	for (int i = 0;i <n ;i++)
	{
		int t = 0;
		for (int j = i+1;j < n - 1;j++)
		{
			if (a[j] < a[j + 1] && a[j] < a[j - 1])
				t=j;
			break;
		}
		a[t] = a[t] * a[t];
		}
	for (int i = 0;i < n;i++)
		cout << a[i] << " ";
	cout << "\n";

	/*const int n = 5;
	double  a[n],b[n];
	for (int i = 0;i < n;i++)
		cin >> a[i];
	for (int i = 0;i < n;i++)
		b[i] = a[i];
	for (int i = 0;i < n;i++)
	{
		if (i == 0)
			a[i] = (b[i] + b[i + 1]) / 2;
		else if (i == n-1)
			a[i] = (b[i - 1] + b[i]) / 2;
		else
		a[i]=(b[i+1]+b[i-1]+b[i])/3;
	}
	for (int i = 0;i < n;i++)
			cout << a[i] << " ";
		cout << "\n";*/
	
	system("pause");
    return 0;
}

