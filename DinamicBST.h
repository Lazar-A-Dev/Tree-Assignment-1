#pragma once
#include<iostream>
#include"BTNode.h"
using namespace std;
class DinamicBST
{
public:
	BTNode* root;
	int brojEl;

	DinamicBST();
	~DinamicBST();
	int BrojElemenata() { return brojEl; }
	void DeleteRoot(BTNode*);
	void Import(int);
	void PrintTree();
	void PrintTree(BTNode*);

	int HightOfNode(int);

	int WeightOfTree();
	int WeightOfTree(BTNode*);
};

