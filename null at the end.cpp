// null at the end.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int mas[n] , *a = mas, *b = mas;
	for (int i = 0;i < n;i++)
	{
		cout << "������� " << i + 1 << " ������� ������:";
		while (!(cin >> a[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "������� " << i + 1 << " ������� ������:";
		}
	}
	system("cls");
	for (a = mas; a<mas + n; ++a) {
		if (*a) *b++ = *a;
	}
	while (b != a) *b++ = 0;
	for (a = mas; a<mas + n; ++a) {
		cout << *a << " ";
	}
	_getch();
	return 0;
}