// Control test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	//string  l;
	int a[1000];
	int l;
	setlocale(LC_CTYPE, "rus");
	cout << "������� ���������� ����� � �������: ";
	cin >> l;

	//������������� �������
	for (int i = 0; i<l; i++)
	{
		a[i] = rand();
		cout << a[i] << " ";
	}
	cout << endl << endl;

	//����� ������������� �����
	int max = 0;
	for (int i = 0; i<l; i++)
	{
		if (a[i]>max)
			max = a[i];
	}
	cout << "Max: " << max << endl;
	// min 
	int min=10000;
	for (int i = 0; i < l;i++)
	{
		if (a[i] < min)
			min = a[i];
	}

			cout << "Min:" << min << endl;
			system("pause");
	
    return 0;
}

