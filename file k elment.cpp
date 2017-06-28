// file k elment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{

	char fileName[256] = "D:\\file.txt";

	FILE * ptrFile = NULL;
	fopen_s(&ptrFile, fileName, "r+");

	if (ptrFile == NULL)
	{
		cout << "can't open file:" << fileName << "\n";
		system("pause");
		return 0;
	}
	int k;
	cout << "k=";
	cin >> k;


	system("pause");
    return 0;
}

