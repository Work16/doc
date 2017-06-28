// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct tree
{
	int val;
	tree *left, *right;
};


void add(tree *&t, int x)
{
	if (!t)
	{
		t = new tree;
		t->val = x;
		t->left = t->right = NULL;
	}
	else
	{
		if (x<t->val)  
		{
			if (t->left != NULL) add( t->left,x); 
			else
			{
				t->left = new tree; 
				t->left->left =t->left->right = NULL; 
			t->left->val = x;  
			}
		}

		if (x>t->val)
		{
			if (t->right != NULL) add(t->right,x);
			else 
			{
				t->right = new tree; 
				t->right->left = t->right->right = NULL;
				t->right->val = x;
			}
		}
	}
}
void show(tree *&t)
{
	if (t)
	{
		show(t->left);
		cout << t->val<<" ";
			show(t->right);
	}
}
tree * search(tree *&t,int key )
{
	if (t)
	{
		if (key > t->val)
		{
			if (t->left)
				search(t->left, key);
			else t = NULL;
		}
		else if (key < t->val)
		{
			if (t->right)
				search(t->right, key);
			else
				t = NULL;
		}
		else return t;
	}
	return NULL;
}

void difer(tree *t, tree *& t1)
{
	int key;
	cout << "Введите значене:\n";
	cin >> key;
	tree *temp = search(t, key);
	if (temp)
	{
		tree *p = temp;
		add(t1, p->val);
	while (p->left)
	{
		p = p->left;
		add(t1, p->val);
	}
	p = temp;
	while (p->right)
	{
		p = p->right;
		add(t1, p->val);
	}
}
}

int main()
{
	tree *t = NULL,*t1=NULL;
	int a, n;
	setlocale(LC_ALL, "Russian");
	cout << "Введите колтчество элементов дерева:\n";
	cin >> n;
	cout << "Введите дерево:\n";
	for (int i = 0;i < n;i++)
	{
		cin >> a;
		add(t, a);
}
	show(t);
	cout << endl;
	difer(t, t1);
	show(t);
	cout << endl;
	show(t1);
	cout << endl;
	cout << endl;
	system("pause");
    return 0;
}

