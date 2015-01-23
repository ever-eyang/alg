
class Node {
	public:
		int key;
		Node* parent;
		Node* left;
		Node* right;
		Node(int key);
};

void InOrderWalk(Node*);
