// semestr 2 lab 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

struct date1 { short int day1; short int month1;short int year1; };
struct date2 { short int day2; short int month2;short int year2; };

int main()
{
	int a;
	char q;
	cout << "1.Read\n2.delete\n3.rewrite\n4.search\n";
	cin >> a;
	switch (a - 1)
	{
	case 0:
	{
		//freder();
		break;
	}
	case 1:
	{
		// fdelete();
		break;
	}
	case 2:
	{
		system("cls");
		cout << "a.fio\nb.telephone\nc.date of birthday\nd.statys\n";
		cin >> q;
		switch (q)
		{
		case 'a' :
		{
			// frewritefio ();
			break;
		}
		case 'b' : 
		{
			// frewritetelephone();
			break;
		}
		case 'c' :
		{
			// frewritedate of birthday ();
			break;
		}
		case 'd':
		{
			//frewritestatus();
			break;
		}
		default :
		{
			cout << "\nMistake !!!\n";
			break;
		}
		}
		break;
	}
	case 3:
	{
		// fsearch();

	}
	}

	system("pause");
    return 0;
}

