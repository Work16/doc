// сортировка.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;


struct list
{
	int a;
	list *next;
};


void builder(list *& head,int b)
{
	if (head == NULL)
	{
		list *k = new list;
		k->a = b;
		k->next = NULL;
		head = k;
	}
	else
	{
		list *n = new list;
		n->a=b;
		n->next = head;
		head = n;
	}
}

void print(list *c)
{
		while (c)
		{
			cout << c->a << "  ";
			c = c->next;
		}
		cout << endl;
}

void sort(list *&head)
{
	list *temp = new list , *temp2 = new list;
	temp = head;
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 5;j++)

		{
			temp2 = temp->next;
			if (temp->a > temp2->a)
			{
				swap(*temp,* temp2);
			}
			temp = temp->next;
		}
	}
}
int main()
{
	list *l=NULL;
	//int b;
	for (int i = 0;i < 10;i++)
	{
		//cin >> b;
		builder(l, rand());
	}
	print(l);
	sort(l);
	cout << endl;
	print(l);
	_getch();
    return 0;
}

