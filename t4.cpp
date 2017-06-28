// task4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
#include "ctype.h" 
using namespace std;



int main()
{
	char l;
	char  a [] = { l};
	cout  << "l:";
		cin>>  l;
	if (   isalpha  (  a[sizeof(l)]) = true)
	{
        cout << 0;
		}
	else {
		if (ispunct ( a[sizeof (l)]) = true)
		{
	        cout << 2;
			}
		else
		{
			cout << 1;
		}
	}
	system("pause");
    return 0;
}

