// min_a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct tree
{
	int val;
	int count;
	tree *l, *r;
};
void add(tree *&t, int v)
{
	if (t)
	{
		if (v < t->val)
		{
			if (t->l) add(t->l, v);
			else
			{
				t->l = new tree;
				t->l->val = v;
				t->count = 1;
				t->l->l = t->l->r = NULL;
			}
		}
		else if (v>t->val)
		{
			if (t->r)add(t->r, v);
			else
			{
				t->r = new tree;
				t->r->val = v;
				t->r->count = 1;
				t->r->r = t->r->l = NULL;
			}
		}
		else
			t->count++;
		}
	else
	{
		t = new tree;
		t->val = v;
		t->count = 1;
		t->l = t->r = NULL;
	}
}
int min_a(tree *t, int a)
{
	static int min = 123456789;
	if (t)
	{
		if (t->val > a && t->val < min)
			min = t->val;
	if(t->l)	min_a(t->l, a);
	if(t->r)	min_a(t->r, a);
	}
	return min;
}

int min_a1(tree *t, int a)
{
	/*int l = 0;
	do
	{
		l = t->val;
		t = t->l;
	} while (t->val > a && t->l);
	//if (t->val > a)
		return t->val;
	//else
	//	return l;*/
/*	if (t)
	{
		if(t->l)if (t->l->val > a)
			min_a1(t->l, a);
		else
			return t->val;
	}*/
	while (t->l && t->l->val > a)
	{
		t = t->l;
	}
	if (t->val > a)
		return t->val;
	else
		return -159;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n,a,b;
	tree *t = NULL;
	cout << "Введте количество элементов дерева:";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Введите значение:";
		cin >> b;
		add(t, b);
	}
	system("cls");
	cout << "Введите границу:";
	cin >> a;
	system("cls");
	if (min_a(t, a)!=123456789)
		cout << "Ваш результат:" << min_a(t, a) << endl;
	else
		cout << "Такого значения не существует!\n";
	cout << "****\n" << min_a1(t, a) << endl;
	system("pause");
    return 0;
}

