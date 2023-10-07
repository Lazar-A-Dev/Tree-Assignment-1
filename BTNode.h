#pragma once
#include<iostream>
using namespace std;
class BTNode
{
public:
	int info;
	BTNode* left, * right;

	BTNode();
	BTNode(int);
	BTNode(int, BTNode*, BTNode*);
	~BTNode();
	void Print();
};

