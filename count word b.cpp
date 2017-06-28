// count word b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <cctype>
#include <conio.h>
using namespace std;


int main()
{
	char a[80];
	cin.getline(a, 80);
	bool index = false;
	int count = 0;
	for (int i = 0;i != '\0';i++)
	{
		if (isalpha(a[i])=='b' && !(index ))
		{
			count++;
			index = true;
		}
		if (! isalpha(a[i]))
		index = false;
	}
	cout << count << endl;
	_getch();
    return 0;
}

