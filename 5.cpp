// 5.cpp : Defines the entry point for the console application.
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
int x = -123456789;
void add(tree *&t, int x)
{
	if (t)
	{
		if (x < t->val)
		{
			if (t->l) add(t->l, x);
			else
			{
				t->l = new tree;
				t->l->val = x;
				t->l->count = 1;
				t->l->l = t->l->r = NULL;
			}
		}
		else if (x>t->val)
		{

			if (t->r) add(t->r, x);
			else
			{
				t->r = new tree;
				t->r->val = x;
				t->r->count = 1;
				t->r->l = t->r->r = NULL;
			}
		}
		else t->count++;
	}
	else
	{
		t = new tree;
		t->val = x;
		t->count = 1;
		t->l = t->r = NULL;
	}
}

int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int height(tree *t)
{
	if (t)
	{
		return ( 1+max2(height(t->l), height(t->r)));
		height(t->l);
		height(t->r);
	}
	return 0;
}

bool prov(tree *t)
{
	if (!t) return 1;
	if (!prov(t->l)) return 0;
	if (t->val < x) return 0;
	x = t->val;
	return (prov(t->r));
}
bool prov_1(tree *&t)
{
	if (t)
	{
		int dif = height(t->l) - height(t->r);

		if (dif == 1 || dif == -1 || dif == 0)
			/*if (height(t->l) - height(t->r) != 1)
				return 0;
			if (height(t->l) - height(t->r) != -1)
				return 0;
			if (height(t->l) - height(t->r) != 0)
				return 0;*/
		{
			if (t->l)prov_1(t->l);
			if (t->r)prov_1(t->r);
			return 1;
		}
	 return 0;
	}
	return 1;
}

int main()
{
	tree *t = NULL;
	setlocale(LC_ALL, "Russian");
	int a, n;
	cout << "Введите количество элементов дерева:\n";
	cin >> n;
	if (n > 0)
	{
		for (int i = 0;i < n;i++)
		{
			cout << "Введите значение:\n";
			cin >> a;
			add(t, a);
		}
	}
	system("cls");  
	cout << "Высота дерева:" << height(t) << endl;
	if (prov(t) && prov_1(t))
		cout << "Дерево является АВЛ-деревом!\n";
	else
		cout << "Дерево НЕ является АВЛ деревом!\n";
	system("pause");
    return 0;
}

