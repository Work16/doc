// exam1 string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{
	
	char str1[5];
    char str2[3];
	cout << "str1:";
	cin >> str1;
	cout << "str2:";
	cin >> str2;
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			if (str1[i] == str2[j])
			{
				for (int k = i;k < 4;k++)
				{
					str1[k] = str1[k++];
					
				}
			}
		}
	}
	cout << "str3:" << str1 << endl;
	_getch();
    return 0;
}

