// probel afer tochka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string.h"
#include "cctype"
using namespace std;
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

		bool is_sign(char value)
		{
			return ispunct(value);
		}

		int main()
		{
			string str;
			getline(cin, str);
			replace_if(str.begin(), str.end(), is_sign, ' ');
			cout << str << endl;
			system("pause");
		}
	
	/*	
	system("pause");
    return 0;
}
*/

	/*int s = 0;
	char a[sizeof s] = { s };
	cout << "enter string :";
	cin >> s;
	int i = 0;
	if (i <= sizeof s && i == ispunct(s))
	{
		cin >> clear;
	}
	
		//if (i = { ispunct(s) })

		cout << i << endl;*/
	

		
