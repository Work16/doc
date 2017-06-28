// math1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <stdio.h>
using namespace std;



int main()
{
const 	int s = 256;
char str1[s];
char str2[s];
	char fileName[s] = "D:\\file.txt";

	FILE * ptrFile = NULL;
	fopen_s(&ptrFile, fileName, "w+");

	if (ptrFile == NULL)
	{
		cout << "can't open file:" << fileName << "\n";
		system("pause");
		return 0;
	}
	fprintf_s(ptrFile, "%s", str1, s);
	
	char fileName[s] = "D:\\fil.txt";

	FILE * ptrFil = NULL;
	fopen_s(&ptrFil, fileName, "w+");

	if (ptrFile == NULL)
	{
		cout << "can't open fil2:" << fileName << "\n";
		system("pause");
		return 0;
	}
	fprintf_s(ptrFile, "%s", str1, s);
	
    return 0;
}

