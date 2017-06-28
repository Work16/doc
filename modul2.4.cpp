// modul2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "cctype"
using namespace std;


int main()
{
	int count = 0, can =0;
	string str1;
	cout << "enter:";
	getline(cin ,str1);
	string str2;
	cin >> str2;
    int d = 0;
	for (int i = 0;i <= size(str1);i++)
	{
		for (int j = 0;j <= size(str2);j++)
		{
			count = 0;
			if (str1[i] == str2[j])
			{
				i++;
				j++;
				count++;
				d++;
			}
			
			if (str1[i] == '\s' && j != size(str2))
			{
				i++;
				j = 0;
				d -= count;
			}
			else
			{
				i++;
				j = 0;
				d -= count;

			}
		}
			if (d != 0)
			{
				can++;
			}
		

		cout << can << "\n";
	}
	
	system("pause");
    return 0;
}

