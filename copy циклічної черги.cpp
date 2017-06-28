// copy ������� �����.cpp : Defines the entry point for the console application.
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
	Node *Head, *Tail; //������ ������� � ��� ��� ���������
	int size; //����� ��������� � ������ 
public:
	List() :Head(NULL), Tail(NULL), size(0) {}; //������������� ��������� � ���� � ������� ������������
	void Add(int x);//������� ���������� �������� � ������
	void Show(int size);
	void cj(int size);
};

void List::Add(int x)
{
	size++; //��� ������ ���������� �������� ����������� ����� ��������� � ������

	Node  *temp = new Node; //��������� ������ ��� ������ �������� ������
	temp->Next = Head; //��������� �������. ��������� ������� - ��� ������ ������ 
	temp->x = x; //���������� � ���������� ������ ������ �������� x 

	if (Head != NULL) //� ��� ������ ���� ������ �� ������
	{
		Tail->Next = temp; //������ ������ � ��������� �� ��������� ��������� ����
		Tail = temp; //��������� �������� �������=������ ��� ���������.
	}
	else Head = Tail = temp;//���� ������ ���� �� ��������� ������ �������.
}
void List::Show(int size)
{
	Node *tempHead = Head; //��������� �� ������

	int temp = size; //��������� ���������� ������ ����� ��������� � ������
	while (temp != 0) //���� �� �������� ������� ������� �� ����� ������
	{
		cout << tempHead->x << " "; //��������� ������� ������ �� ����� 
		tempHead = tempHead->Next; //���������, ��� ����� ��������� �������
		temp--; //���� ������� ������, ������ �������� �� ���� ������ 
	}
}

void List::cj(int size)
{
	List ls;
	Node *tempHead = Head;
	int temp = size; //��������� ���������� ������ ����� ��������� � ������
	while (temp != 0) //���� �� �������� ������� ������� �� ����� ������
	{
		ls.Add(tempHead->x);//��������� ������� ������ �� ����� 
		tempHead = tempHead->Next; //���������, ��� ����� ��������� �������
		temp--; //���� ������� ������, ������ �������� �� ���� ������ 
	}
	ls.Show(3);
}

int main()
{
	system("CLS");
	List lst; //lst - ���������� ��� ������� ������
	lst.Add(100); //�������� 100 � ������
	lst.Add(200); //�������� 200 � ������
	lst.Add(300); //�������� 300 � ������
	lst.Show(3);
	lst.cj(3);
	system("PAUSE");
    return 0;
}

