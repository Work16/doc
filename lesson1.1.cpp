// lesson1.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
double g = 9.81;
// ��������� ��� ������ ������ �� �������� ���� � ������ h
	//t=square 2h/g



 main()
{
	int high;
	cout << "high:";
	cin >> high;
	int p;
	 int  p = sqrt(  2 * high / g);
	cout << "time:" << p << "/n";

	system("pause");
    return 0;
}


