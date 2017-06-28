// crosword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
#include <cctype>
#include <string.h>
using namespace std;


int main()
{
	int q;
	string Answer;
	menu:
	cout << "Enter the number of question:";
	while (!(cin >> q))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Enter the number of question:";
	}
	if (q > 3)
	{
		goto menu;
	}
	switch (q)
	{
	case 0: 
	{
		cout << "What is my name ?\n";
		Answer = {"Maryna"};
	}
	case 1:
	{
		cout << "What is my surname ?\n";
		 Answer = { "Ulozhenko" };
	}
	case 2:
	{
		cout << "How old am i ?\n";
	 Answer = { "17" };
	}
	case 3:
	{
		cout << "Has i any brothers or sisters ?\n";
		 Answer = {"No,i has not"};
	}
	}
	_getch();
    return 0;
}

