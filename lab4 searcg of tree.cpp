// lab4 searcg of tree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct list
{
	int val;
	list *next;
};
const int  n = 3;
bool  visited[n];
void builder(list *&beg, int a)
{
	if (!beg)
	{
		list *temp;
		temp = new list;
		temp->val = a;
		temp->next = NULL;
		beg = temp;
	}
	else
	{
		list *temp;
		temp = new list;
		temp->val = a;
		temp->next = beg;
		beg = temp;
	}
}

void print(list *beg,int i)
{
	if (beg)
	{
		cout << i + 1 << " вершина смежная с ";
		while (beg)
		{
			cout << beg->val << " ";
			beg = beg->next;
		}
		cout << "вершиной\\вершинами " << endl;
	}
}




void dfs(list **l,list **p,int j)
{
	if (0 < j < n)
	{
		visited[j] = true;
		while (l[j])
		{
			if (!visited[l[j]->val])
			{
		
				builder(p[j], l[j]->val);
				dfs(l, p, l[j]->val);
			}
			l[j] = l[j]->next;
		}
	}
	
}



int main()
{
	double t1=3;
	setlocale(LC_ALL, "Russian");
	int a=1; 
	list *l[n],*p[n];
	for (int i = 0;i < n;i++)
		l[i] = NULL;
	for (int i = 0;i < n;i++)
		p[i] = NULL;
	for (int i = 0;i < n;i++)
	{
		a = 1;
		while (a > 0)
		{
			cout << "Введите смежную с " << i + 1 << " вершину:\n";
			cin >> a;
			if (a>0)
			builder(l[i], a-1 );
		}
		system("cls");
	}
	for (int i = 0;i < n;i++)
		visited[i] = false;
	if (!(t1 % 2))
	{
		for (int i = 0;i < n;i++)
			if (!visited[i])
				dfs(l, p, i);
	}
	for (int i = 0;i < n;i++)
		print(p[i],i);
	system("pause");
	return 0;
}
