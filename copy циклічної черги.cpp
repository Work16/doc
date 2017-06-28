// copy циклічної черги.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


struct  Node
{
	int x;
	Node *Next;
};

class List
{
	Node *Head, *Tail; //Первый элемент и тот что последний
	int size; //Число элементов в списке 
public:
	List() :Head(NULL), Tail(NULL), size(0) {}; //Инициализация элементов в ноль с помощью конструктора
	void Add(int x);//Функция добавления элемента в список
	void Show(int size);
	void cj(int size);
};

void List::Add(int x)
{
	size++; //При каждом добавлении элемента увеличиваем число элементов в списке

	Node  *temp = new Node; //Выделение памяти для нового элемента списка
	temp->Next = Head; //Замыкание контура. Последний элемент - это начало списка 
	temp->x = x; //Записываем в выделенную ячейку памяти значение x 

	if (Head != NULL) //В том случае если список не пустой
	{
		Tail->Next = temp; //Запись данных в следующее за последним элементом поле
		Tail = temp; //Последний активный элемент=только что созданный.
	}
	else Head = Tail = temp;//Если список пуст то создается первый элемент.
}
void List::Show(int size)
{
	Node *tempHead = Head; //Указываем на голову

	int temp = size; //Временная переменная равная числу элементов в списке
	while (temp != 0) //Пока не выполнен признак прохода по всему списку
	{
		cout << tempHead->x << " "; //Очередной элемент списка на экран 
		tempHead = tempHead->Next; //Указываем, что нужен следующий элемент
		temp--; //Один элемент считан, значит осталось на один меньше 
	}
}

void List::cj(int size)
{
	List ls;
	Node *tempHead = Head;
	int temp = size; //Временная переменная равная числу элементов в списке
	while (temp != 0) //Пока не выполнен признак прохода по всему списку
	{
		ls.Add(tempHead->x);//Очередной элемент списка на экран 
		tempHead = tempHead->Next; //Указываем, что нужен следующий элемент
		temp--; //Один элемент считан, значит осталось на один меньше 
	}
	ls.Show(3);
}

int main()
{
	system("CLS");
	List lst; //lst - Переменная тип которой список
	lst.Add(100); //Записали 100 в список
	lst.Add(200); //Записали 200 в список
	lst.Add(300); //Записали 300 в список
	lst.Show(3);
	lst.cj(3);
	system("PAUSE");
    return 0;
}

