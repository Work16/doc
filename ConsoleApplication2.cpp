// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string "
#include "cctype"
using namespace std;


int main()
{
	char  a[6];
	int kl = 0;
	cout << "a:";
	//cin >> a;
	/*int size = sizeof a;
	cout << "size" << size << "\n";
	//int e = strlen(a);*/
	for (int i = 0;i < 6;i++)
	{
		cin >> a[i];
	}
	int size =sizeof a[6] ;
	cout << size;
	for (int i = 0;i < 6;i++)
	{
		if  (a[i] != '\0')
		{
			kl++;
		}

	}
	cout << "size" << kl;
	system("pause");
    return 0;
}

