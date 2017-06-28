// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;




const int n = 3;


void DFS(int st,int graph[n][n],bool visited[n] )
{
	int r;
	cout << st + 1 << " ";
	visited[st] = true;
	for (r = 0; r <= n; r++)
		if ((graph[st][r] != 0) && (!visited[r]))
			DFS(r,graph,visited);
}


void main()
{
	setlocale(LC_ALL, "Rus");
	int start=1;
	int graph[n][n];
	bool visited[n];
	cout << "Введите матрицу смежности графа:\n";
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
		{
			cin >> graph[i][j];
		}
	for (int i = 0; i<n; i++)
	{
		visited[i] = false;
	}
	cout << "Порядок обхода: ";
	DFS(start - 1,graph,visited);
	bool flag = true;
	for (int i = 0;i < n;i++)
		if (!visited[i])
			flag = false;
	system("cls");
	if (flag)
		cout << "Граф связный!\n";
	else
		cout << "Граф НЕ связный!\n";
	system("pause>>void");
}

