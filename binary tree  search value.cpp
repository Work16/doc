// binary tree  search value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct tree
{
	int value;
	tree *l, *r;
};

void add(int x, tree *&z)
{
	if (!z)
	{
	
		z = new tree;
		z->value = x;
		z->l = z->r = NULL;
		//z->value = x;
	} 
	 if (x > z->value) add(x, z->r);
	else add(x, z->l);
}

bool prov(tree *x,int z)
{
	if (z)
	{bool flag = false;
	prov(x->l, z);
	if (x->value == z)
	{
		flag = true;
		return flag;
	}
	prov(x->r, z);}

}

int main()
{
	tree *l = NULL;
	for (int i = 0;i < 5;i++)
		add(i + 1, l);
	int z;
	cout << "z=";
	cin >> z;
	if (prov(l, z))
		cout << "True\n";
	else
		cout << "False\n";
	system("pause");
    return 0;
}

