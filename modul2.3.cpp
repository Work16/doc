// modul2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	int n;
	cout << "n=";
	cin >> n;
	int *ptr = 0;
	ptr = new int [n];
	for (int i = 0;i < n;i++)
	{
		ptr[i] = rand () % 4;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - 1;j++)
		{
			if (ptr[j] > ptr[j + 1])
			{
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		cout << ptr[i] << "\n";
	}

	delete[] ptr;
	system("pause");
    return 0;
}

