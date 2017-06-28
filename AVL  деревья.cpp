// AVL  деревья.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int key;
	char height;
	Node *right;
	Node *left;
	Node(int k) { key = k; height = 1; left = right = 0; }
};
char height(Node *p)
{
	if (p) return p->height;
	else return 0;
}
int BF(Node *p)
{
	return height(p->right) - height(p->left);
}
void OverHeight(Node *p)
{
	char hleft = height(p->left);
	char hright = height(p->right);
	p->height = (hleft>hright ? hleft : hright) + 1;
}

int main()
{

	system("pause");
    return 0;
}

