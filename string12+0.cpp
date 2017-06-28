// string12+0.cpp : Defines the entry point for the console application.
//Дана строка. Если ее длина больше 10, то оставить в строке только первые 6 символов, иначе дополнить строку символами 'o' до длины 12.
  // Источник: http://www.itmathrepetitor.ru/prog/zadachi-na-stroki/

#include "stdafx.h"
#include "iostream"
#include "string.h"
#include "cctype"
using namespace std;


int main()
{
 char a[256] ;
 
 cout << "enter string :"<<"\n";
 cin >> a;
 int size = strlen(a);
 if (size > 10)
 {
	 for (int i = 0;i < 6;i++)
		 cout << a[i];
 }
 else
 {
	 for (int i = 0; i < size;i++)
	 {
		 cout << a[i];
		
	 }

	 for (int i = size;i < 12;i++)
	 {
		 cout << '0';
	 }
 }
 //for (int i = 0;i <= sizeof s;i++)
 //{
	/* if (sizeof s > 10)
	 {
		 for (int i = 0;i <= 6;++i)
		 {
			 s = ''
		 }
	// }
	 /*else
	 {
		 for (int i = 0;i <= 12;i++)
			 cout << s;A

	}*/
 //}
 system ("pause");
    return 0;
}

