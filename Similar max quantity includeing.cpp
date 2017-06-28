// Similar max quantity includeing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


struct list
{
	int val;
	list *next;
};

void builder(list *&t, int v)
{

if (t)
	{
		list *temp = t;
		if (temp->val > v)
		{
			list *f = new list;
			f->val = v;
			f->next = temp;
			temp = f;
			return;
		}
		while (temp->next)
		{
			if (temp->next->val > v)
			{
				list *f = new list;
				f->next = temp->next;
				temp->next = f;
				f->val = v;
				return;
			}
			temp = temp->next;
		}
		if (temp->val <= v && temp->next == NULL)
		{
			list *f = new list;
			f->next = NULL;
			temp->next = f;
			f->val = v;
			return;
		}
	}
	else
	{
		t = new list;
		t->next = NULL;
		t->val = v;
		return;
	}
}

int max(list *t)
{
	while (t->next)
		t = t->next;
	return t->val;
}

int count(list *t)
{
	int count = 0;
	while (t->next)
	{
		count++;
		t = t->next;
	}
	return 1+count;
}

bool nalez(list *t, int v)
{
	while (t)
	{
		if (t->val == v)
			return true;
		t = t->next;
	}
	return false;
}

bool similar(list *t)
{
	while (t->next)
	{
		if (t->val == t->next->val)
			return true;
		t = t->next;
	}
	return false;
}


void print(list *t)
{
	while (t)
	{
		cout << t->val << " ";
		t = t->next;
	}
}

int main()
{
	list *t = NULL;
	int a;

for (int i = 0;i < 5;i++)
	{
		cin >> a;
		builder(t, a);
	}
	system("cls");
	print(t);
	cout << "\n****\n" << max(t) << endl;
	cout << "\n***\n" << count(t);
	cout << "\n***\n";
	if (nalez(t, 5))
		cout << "yes\n";
	else
		cout << " no\n";
	cout << "\n****\n";
	if (similar(t))
		cout << "similar\n";
	else
		cout << "no similar\n";
	system("pause");
    return 0;
}

