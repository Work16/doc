// 3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 6;


struct m
{
	int a[n];
	int size, head, tail;
}q;

void add(int f)
{
	if (q.size >= n)
	{
		cout << "Sorry queue is full!!!\n";
	}
	else
	{
		if (q.tail >= n)
			q.tail = 0;
		q.a[q.tail] = f;
		q.tail++;
		q.size++;
	}
}

void del()
{
	if (q.size == 0)
		cout << "Sorry queue is free!!!\n";
	else
	{
		q.head++;
		if (q.head >= n)
			q.head = 0;
		q.size--;
	}
}


void show()
{
	for (int i = 0;i < q.size;++i)
	{
		int k = q.head + i;
		if (k >= n)
			k = k-n;
		cout << q.a[k] << " ";
	}
}


int main()
{
	 q.head = 0, q.tail = 0, q.size = 0;
	 int f = 1,x;
	/* while (f)
	 {
		 cout << "Enter f:\n";
		 cin >> f;
		 if (f > 0)
		 {
			 if (f % 2 != 0)
				 add(f);
			 else
				 del();
		 }
		 else break;
	 }*/
	 cout << "How many numbers ?\n";
	 cin >> f;
	 for (int i = 0;i < f;i++)
	 {
		 cout << "Enter x:\n";
		 cin >> x;
		 if (x > 0)
		 {
			 if (x% 2 != 0)
				 add(x);
			 else
				 del();
		 }
		 else break;
	 }
	 system("cls");
	 show();
	 cout << endl;
	 system("pause");
    return 0;
}

