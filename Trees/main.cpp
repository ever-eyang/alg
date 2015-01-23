#include <iostream>
#include "Tree.h"

using namespace std;


int main() {
	Node root(6);
	Node a(5);
	Node b(7);
	Node c(2);
	Node d(5);
	Node e(8);

	root.left = &a;
	root.right = &b;

	InOrderWalk(&root);
	cout << endl;
}
