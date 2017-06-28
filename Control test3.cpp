// Control test3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


	int main() {
		setlocale(LC_CTYPE, "rus");

		cout << "¬ведите число : ";
		int num;
		cin >> num;
		cout << num << " = 1";
		for (int i = 0; num % 2 == 0; num /= 2)
		{
			cout << " * " << 2;
		}
		for (int i = 3; i <= num;)
		{
			if (num % i == 0)
			{
				cout << " * " << i << endl;
				num /= i;
			}
			else
			{
				i += 2;
			}
		}

		system("pause");
		return 0;
	}

 

