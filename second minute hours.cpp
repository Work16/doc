// second minute hours.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <conio.h>
using namespace std;


int main()
{  
	setlocale(LC_ALL, "Russian");
 unsigned long	int  second, minute, hours;
	cout << "¬ведите количество секунд :";
	cin >> second;
	hours = second / 3600;
	minute = second / 60-hours*60;
	second = second - hours*3600-minute*60;
	cout << "\n\t" << second << "секунд" <<"\n\t"<< minute << "минут" <<"\n\t"<< hours << "часов" << endl;
	_getch();
    return 0;
}

