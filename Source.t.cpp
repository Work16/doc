#include "stdafx.h"
#include "iostream"
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 2;
	int a[n][n], max, min;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << "������� [" << i + 1 << ";" << j + 1 << "] ������� ������� :";
			while (!(cin >> a[i][j]))
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "������� [" << i + 1 << ";" << j + 1 << "] ������� ������� :";
			}
		}
	}
	system("cls");
	for (int i = 0;i < n;i++)
	{
		cout << "\n";
		for (int j = 0;j < n;j++)
		{
			cout << setw(3) << a[i][j];
		}
	}
	cout << endl << endl;

	
		for (int i = 0;i < n;i++)
		{
			max = 1;
			for (int j = 0;j < n;j++)
			{
				if (a[i][j]>max)
				{
					max = j;
				}
			}
			min = 1;
			for (int k = 0;k < n;k++)
			{
				if (a[max][k] < a[max][min])
				{
					min = k;
				}
			}
			if (min == i)
			{
				cout << "����� matr[" << min + 1 << "," << max + 1 << "] ��������" << endl;
			}
		}
	system("pause");
	return 0;
}