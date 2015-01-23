#include <iostream>
#include "Tree.h"

using namespace std;


int main() {
	bNode root(6);
	bNode a(5);
	bNode b(7);
	bNode c(2);
	bNode d(5);
	bNode e(8);

	root.left = &a;
	root.right = &b;

	InOrderWalk(&root);
	cout << endl;
}
