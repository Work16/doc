// 1 Два циклических списка.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


struct list
{
	int x;
	list *next;
};


void builder(list *&beg,int f)
{
	if (!beg)
	{
		list *temp = new list;
		temp->x = f;
		temp->next = temp;
		beg = temp;
	}
	else {
		list *temp = new list();
		temp->x = f;
		temp->next = beg->next;
		beg->next = temp;
	}
}


void print(list *beg)
{
	if (beg!= NULL)
	{
		list *p = beg;
		cout << "Kolcevoj Spisok:" << endl;
		cout << p->x << endl;
		p = p->next;
		while (p != beg)
		{
			cout << p->x << endl;
			p = p->next;
		}
	}
	else
		cout << "Spisok pust." << endl;
}


int main()
{
	list *l(NULL),*d(NULL);
	int n;
	for (int i = 0;i < 5;i++)
	{
		cout << "Enter n:";
		cin >> n;
		if (n % 2 == 0)
			builder(l, n);
		else
			builder(d, n);
	}
	print(l);
	cout << endl;
	print(d);
	system("pause");
    return 0;
}

