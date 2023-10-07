#include "BTNode.h"
BTNode::BTNode() {
	info = 0;
	left = right = NULL;
}

BTNode::BTNode(int i) {
	info = i;
	left = right = NULL;
}

BTNode::BTNode(int i, BTNode* l, BTNode* r) {
	info = i;
	left = l;
	right = r;
}

BTNode::~BTNode() {
	
}

void BTNode::Print() {
	cout << info << " ";
}