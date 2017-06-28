// b4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;



int main()
//{
	//double a[25][25];
	//int i, j, s;
	//int main()
	{
		int matrix[3][4];
		std::cout << "" << std::endl;
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 4; ++j)
			{
				std::cout << "Matrix [" << i + 1 << "][" << j + 1 << "] = ";
				std::cin >> matrix[i][j];
			}
		std::cout << std::endl;
		std::cout << "Ваша матрица:" << std::endl;
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
				std::cout << matrix[i][j] << " ";
			std::cout << std::endl;
		}
		system("pause");
		return 0;
	}


