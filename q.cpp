// q.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	int A[100];
	int  n;
	int static l;
	int count = 0;
	cout << "n=";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int l = rand();
		cout << l << endl;
	
	if (l == l)
	{
		count++;
		cout << "count=" << count;
	}
	}

	system("pause");
    return 0;
}


