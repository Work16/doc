// 3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int k = 100;
int ms, ns;
void add(int, int);
void read();
void b(int, int);
int f = k;

	struct p
	{
		int m, n;

	}a[k];


	int h = k;
	int mi, ni;
	int main()
	{
		cout << "Entre m and n:\n";
		cin >> ms >> ns;
		cout << endl << "Fun=" << b(ms, ns) << endl;

		return 0;
	}

	void b(int ms, int ns)
	
	{
		int t;
		add(ms, ns);
		do {
			read();
			if (!ns && ms)
				add(ns - 1, 1);
			else if (ns > 0 && ms > 0)
				add();
			else {
				int t = ms + 1;
				if (++f <k ) {
					read(); f++;
					add(n - 1, t, );
				}
			}
		} while (p < M);
		return t;
	}

	}


	void add(int ms, int ns)
	{
		if (h--) {
			a[h].m = ms; a[h].n = ns;
		}
		else cout << "Steck is  full" << endl;
	}

	void read()
	{
		ns= a[h].n; ms = a[h].m;
	}

