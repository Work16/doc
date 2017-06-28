// max matrix posl zviazn save.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 2;
const int m = 3;

struct list
{
	int val;
	int i;
	int j;
	list *next;
};
void builder(list *&beg, int v,int i,int j)
{
	if (beg)
	{
		list *temp = beg;
		while (temp->next)
			temp = temp->next;
		temp->next = new list;
		temp->next->val = v;
		temp->next->i = i;
		temp->next->j = j;
		temp->next->next = NULL;
	}
	else
	{
		beg = new list;
		beg->val = v;
		beg->i = i;
		beg->j = j;
		beg->next = NULL;
	}
}
int max(list **l)
{
	int max = -159;
	for (int i = 0;i < n;i++)
		while (l[i])
		{
			if (l[i]->val > max)
				max = l[i]->val;
			l[i] = l[i]->next;
		}
	return max;
}
int main()
{
	int a;
	list *l[n];
	for (int i = 0;i < n;i++)
		l[i] = NULL;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m;j++)
		{
			cin >> a;
			//if (a)
	//			builder(l[i], a, i, j);
		}
	system("cls");
	//cout << max(l)<<endl;
	int t;
	cin >> t;
	cout <<( t%100)<< endl;
	system("pause");
    return 0;
}

