// count symbols in string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"
#include "string.h"
using namespace std;


int main()
{
	int  s = 0;
	char a[sizeof s ] = {s};
	cout << "enter string :";
	cin >> s;
	for (int i = 1; i <= sizeof s;++i)
	{
		s = i;
	}
	  cout << "count:" << s<<"\n";
  
	
	system("pause");
    return 0;
}

