// 3.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int m = 5;

struct list
{
	int val;
	int position;
	list *next;
};


void add(list *&beg, int x, int y)
{
	list *temp = new list;
	if (!beg)
	{
		temp->val = x;
		temp->position = y;
		temp->next = NULL;
		beg = temp;
	}
	else
	{
		temp->val = x;
		temp->position = y;
		temp->next = beg;
		beg = temp;
	}
}



bool prov(list *beg, int i, int j,int v)

{
	bool flag = false;
	/*if (v == 0)
	{
		while (beg->next)
		{

			if ( i<=beg->position<=beg->next->position && beg->position - beg->next->position != 1)
			{
				flag = true;
				return flag;
			}
			else
				beg = beg->next;
		}
	}
	else 
	{*/
		while (beg)
		{

			if (i <= beg->position <= j && beg->val == v)
			{
				flag = true;
				return flag;
			}
			else
			{
				beg = beg->next;
			}
		}
	//}
	return flag;
}


int main()
{
	list *l = NULL;
	int x, y = 0, i, j, v;
	for (int k = 0;k < m;k++)
	{
		cout << "Enter number:\n";
		cin >> x;
		y++;
		if (x != 0)
		{
			add(l, x, y);
			//y = 0;
		}
	}
	cout << "Enter i and j and v:\n";
	cin >> i >> j >> v;
	if (prov(l, i, j, v))
		cout << "True\n";
	else
		cout << "False\n";
	system("pause");
    return 0;
}

