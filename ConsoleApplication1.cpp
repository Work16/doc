// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <conio.h>
#include <iostream>
#include <stdlib.h>
int sum(int n);
using namespace std;
//����������� �������
int sum(int n)  //� �������� ��������� ����� ������������ ����� �� ����� ������ � ���������� n
{
	if (n == 1) return 1;  //���� ����� �������� 1, �� ����� ���������� ��� � 1, � �� � ����������. �.�. ���������� - ��� ����. � �������� 1+0 ����� �����������.
	else return sum(n - 1) + n; //�� ���� n>1, �� ���������� ��� � ���������� ���������, ������ ����� ���� ��������� �� n
	system("pause");
}

int main()
{
	system("cls"); //������� ������ 
	cout << sum(5); // �������� � ������� sum �������� 5. n ��������� �������� 5
	system("pause");
	return 0;
}