#include <vector>

class bNode {
	public:
		int key;
		bNode* parent;
		bNode* left;
		bNode* right;
		bNode(int key);
};

void InOrderWalk(bNode*);

class nNode {
	public:
		int key;
		nNode* parent;
		std::vector<nNode*> children;
		nNode(int key);
};
