// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <conio.h>
#include <iostream>
#include <stdlib.h>
int sum(int n);
using namespace std;
//рекурсивная функция
int sum(int n)  //В качестве параметра будут передаваться число из места вызова в переменную n
{
	if (n == 1) return 1;  //если новое значение 1, то будем складывать его с 1, а не с предыдущим. т.к. предыдущее - это ноль. и сложение 1+0 будет бесконечным.
	else return sum(n - 1) + n; //но если n>1, то складываем его с предыдущим значением, равным сумме всех элементов до n
	system("pause");
}

int main()
{
	system("cls"); //очистка экрана 
	cout << sum(5); // передаем в функцию sum параметр 5. n принимает значение 5
	system("pause");
	return 0;
}