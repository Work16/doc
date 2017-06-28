// pow of 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	int n, pow=1;
	cout << "n=";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		pow *= 2;
		cout << pow << "\n";
	}
	_getch();
    return 0;
}

