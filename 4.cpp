// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



struct list
{
	int val;
	list *next;
};

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

void count(list *beg,int &f)
{
	while (beg)
	{
        beg = beg->next;
		f++;
	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 3;
	int a,f[n];
	for (int i = 0;i < n;i++)
		f[i] = -1;
	list *l[n];
	for (int i = 0;i < n;i++)
		l[i] = NULL;
	for (int i = 0;i < n;i++)
	{
		a = 1;
		while(a > 0)
		{
			cout << "Введите смежную с " << i + 1 << " вершину:\n";
			cin >> a;
			builder(l[i], a - 1);
		}
	}
	system("cls");
	for (int i = 0;i < n;i++)
		count(l[i], f[i]);
	a = f[0];
	for (int i = 1;i < n;i++)
		if (a < f[i])
			a = f[i];
	cout << "Наибольшая степень вершини:\n" << a << endl;
	system("pause");
	return 0;
}



