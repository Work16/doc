// 2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 3;

int count(int a[n][n])
{
	int count = 0;
	for (int i = 0;i < n;i++)
		for (int j = i;j < n;j++)
			if (a[i][j])
				count++;
	return count;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int a[n][n];
	cout << "¬ведите матрицу смежности графа:\n";
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
			cin >> a[i][j];
	system("cls");
	cout << "¬аш результат:\n" << count(a) << endl;
	system("pause");
    return 0;
}

