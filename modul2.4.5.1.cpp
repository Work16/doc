// modul2.4.5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


char founder(char*str1, int i, int count,char*a)
{
	for (i;i < strlen(str1);i++)
	{
	a[count] = (str1, i, count--);
	if ()
	}
	return str1[i];
}
int main()
{ 
	int count = 0;
	const int s = 256;
	char str1[s];
	char a[s];
	cin.getline(str1, s);
	for (int i = 0;i < strlen(str1);i++)
	{
		if (str1[i] == '{' || str1[i] == '[' || str1[i] == '(')
		{
			a[count++] = str1[i];
		}
		if (str1[i] == '}' || str1[i] == ']' || str1[i] == ')')
		{
			if (str1[i] == a[count])
			{
				cout << "mistake !" << i << "\n";
				system("pause");
				return 1;
			}
		if (str1[i]!=a[count])
			{
				cout << str1[i]<<founder(str1,i,count,a);
			}

		}
		

		if (count != 0)
		{
			system("pause");
			return 1;
		}
	}
	system("pause");
    return 0;
}

