#include <cstddef>
#include <iostream>
#include "Tree.h"

Node::Node(int key) :
parent(0),
left(0),
right(0) {
	this->key = key;
}

void InOrderWalk(Node* node) {
	if (node != 0) {
		InOrderWalk(node->left);
		std::cout << node->key << ' ';
		InOrderWalk(node->right);
	}
}
