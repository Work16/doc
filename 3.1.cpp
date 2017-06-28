// 3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


struct list
{
	int x;
	list *next;
};



void builder(list *&beg, int f)
{
	
	if (!beg)
	{
		list *temp = new list;
		temp->x = f;
		temp->next = temp;
		beg=temp;
	}
	else
	{
		list *temp = new list;
		temp->x = f;
		temp->next = beg->next;
		beg->next = temp;
	}
}


void print(list *beg)
{
	if (beg)
	{
    list *temp = beg->next;
	cout << temp->x << " ";
	temp = temp->next;
	while (temp != beg->next)
	{
		cout << temp->x << " ";
		temp = temp->next;
	}
	}
}


void two(list *&beg1, list *&beg2)
{
	int f = 1;
	while (f != 0)
	{

			cout << "f=";
			cin >> f;
			if (f>0)
			{
			if (f % 2 == 0 && f != 0)
			{
				builder(beg1, f);
			}
			else
			{
				builder(beg2, f);
			}
		}
		else if (f<0)
		{
			cout << "Enter only positive world!!!\n";
		}
	}
}

int main()
{
	list *l(NULL), *d(NULL);
	two(l, d);
	print(l);
	cout << endl;
	print(d);
	cout << endl;
	system("pause");
    return 0;
}

