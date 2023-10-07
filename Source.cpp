#include<iostream>
#include"DinamicBST.h"
#include"BTNode.h"
using namespace std;
void main() {
	DinamicBST d;
	d.Import(4);
	d.Import(5);
	d.Import(11);
	d.Import(7);
	d.Import(9);
	d.Import(43);
	d.Import(72);
	d.Import(58);

	d.PrintTree();
	cout << endl;
	cout << "Broj elemenata u stablu: " << d.BrojElemenata() << endl;
	cout << "Visina cvora 43: " << d.HightOfNode(5) << endl;
	cout << "Tezina stabla(Broj listova): " << d.WeightOfTree() << endl;
	system("pause");
}