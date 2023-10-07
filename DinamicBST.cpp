#include "DinamicBST.h"
DinamicBST::DinamicBST() {
	root = NULL;
	brojEl = 0;
}

DinamicBST::~DinamicBST() {
	DeleteRoot(root);
}

void DinamicBST::DeleteRoot(BTNode* p) {
	if (p != NULL) {
		DeleteRoot(p->left);
		DeleteRoot(p->right);
		delete p;
	}
	brojEl = 0;
}

void DinamicBST::Import(int el) {
	BTNode* current = root;
	BTNode* previous = NULL;

	while (current != NULL) {
		previous = current;

		if (current->info > el)
			current = current->left;
		else if (current->info < el)
			current = current->right;
		else return;
	}
	if (root == NULL) {
		root = new BTNode(el);
		brojEl = 1;
	}

	else if (previous->info > el) {
		previous->left = new BTNode(el);
		brojEl++;
	}

	else if (previous->info < el) {
		previous->right = new BTNode(el);
		brojEl++;
	}
}

void DinamicBST::PrintTree() {
	cout << "Stablo: ";
	PrintTree(root);
}

void DinamicBST::PrintTree(BTNode* p) {
	if (p != NULL) {
		PrintTree(p->left);
		cout << p->info << " ";
		PrintTree(p->right);
	}
}


int DinamicBST::HightOfNode(int p) {
	BTNode* current = root;
	int hight1 = 0;
	int hight2 = 0;

	while (current != NULL) {
		if (current->info > p)
			current = current->left;
		
		else if (current->info < p)
			current = current->right;
		
		else if(current->info == p)
			break;

	}
	if (current->info != p)
		throw new exception("Vrednost se ne nalazi u stablu !!");
	
	BTNode* current2 = current;

	while (current != NULL) {
		if (current->left != NULL) {
			current = current->left;
			hight1++;
		}
		else if (current->right != NULL) {
			current = current->right;
			hight1++;
		}
		else break;
	}

	while (current2 != NULL) {
		if (current2->right != NULL) {
			current2 = current2->right;
			hight2++;
		}
		else if (current2->left != NULL) {
			current2 = current2->left;
			hight2++;
		}
		else break;
	}


	if (hight1 > hight2)
		return hight1;
	else return hight2;
}

int DinamicBST::WeightOfTree() {
	return WeightOfTree(root);
}

int DinamicBST::WeightOfTree(BTNode* p) {
	//Treba da vrati broj listova
	if (p == 0)
		return 0;
	if (p->left == 0 && p->right == 0)
		return 1;
	return WeightOfTree(p->left) + WeightOfTree(p->right);

}