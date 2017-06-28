// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 
struct tree
{
	int val, count;
	tree *l, *r;
};
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

int min_a(tree *&t,int a)
{
	if (t)
	{
		if (t->l)
		{
			/*if (t->l->l)
			{
				if (t->l->l->val > a)
					return t->l->val;
				min_a(t->l, a);
			}*/
		/*else*/
		
				if (t->l->val > a)
					return t->l->val;
				else
					return t->val;
			if (t->l->l)
			{
			if (t->l->l->val > a)
			return t->l->val;
			min_a(t->l, a);
			}
		}
		if (t->val > a)
			return t->val;
		else
			return NULL;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n, b;
	tree *t = NULL;
	cout << "¬ведите количество элементов дерева:\n";
	cin >> n;
	if (n > 0)
	{
		for (int i = 0;i < n;i++)
		{
			cout << "¬ведите значение дл€ дерева:\n";
			cin >> b;
			add(t, b);
		}
	}
	cout << "¬ведите границу:\n";
	cin >> a;
	system("cls");
	cout << "¬аш результат:\n";
	cout << min_a(t, a)<<endl;
	system("pause");
    return 0;
}

