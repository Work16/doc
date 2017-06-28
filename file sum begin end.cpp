// file sum begin end.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
		using std::ofstream;
		using std::ifstream;
	
	int main() {
		float mas[100];
		int n = 0;
		ifstream fin("f.txt");
		ofstream fout("g.txt", ios::out);
		while (!fin.eof()) {
			n++;
			fin >> mas[n];
		}
		fout << "summa="mas[1] + mas[n];
	}
    return 0;
}

