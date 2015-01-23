#include <iostream>
#include "Tree.h"

bNode::bNode(int key) :
key(key),
parent(0),
left(0),
right(0)
 {
}

nNode::nNode(int key) :
key(key),
parent(0),
children()
 {
}

void InOrderWalk(bNode* node) {
	if (node != 0) {
		InOrderWalk(node->left);
		std::cout << node->key << ' ';
		InOrderWalk(node->right);
	}
}
