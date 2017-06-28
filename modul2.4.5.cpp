// modul2.4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"
#include "string.h"
using namespace std;

char  founder(char* str1, int pos, char* str2)
{
//	if (strlen(str1) == 0)  return 0;
//	if (strlen(str1) < strlen(str2)) return 0;
	if (strlen ( str1) - pos < strlen ( str2) )
		return 0;
	else
	{
		int d = 0;
		int k = 0;
		for (int j = 0;j < strlen(str2);j++)
		{
			if (str1[pos + j] == str2[j])
			{
				k++;
			}
		}

		if (k == strlen(str2))
		{
			d++;
		}

		return d + founder(str1, pos + 1, str2);
		}
	}



	
	/*if (strlen(str1) == 0 || strlen(str2) == 0)  return 0; 
	if (strlen(str1) < strlen(str2)) return 0;
	else
	{
		
		int d = 0;
		for (int i = 0;i <= strlen(str1);i++)
		{
			for (int j = 0;j <= strlen(str2);j++)
			{
				char* p = str1 + (i + j);
			}

				d++;

				return 		d + founder(p, str2);
			
			
		}
	}*/
		


	
	int main()
	{
	int count = 0;
	int d = 0;
	const int s = 256;
	char str1[s];
	char str2[s];

	cin.getline(str1, s);
	cin.getline(str2, s);
	 
	
	if (strlen(str2) == 0 || strlen(str1) == 0) {
		cout << "d=" << d << "\n";
		system("pause");
		return 0;
	}
       d = founder(str1, 0, str2);

	cout << "d=" << d <<"\n";
	system("pause");
    return 0;
}

