#include <vector>

int parent(int);
int left(int);
int right(int);
void maxHeapify(std::vector<int>&, int index, int hSize);
void buildMaxHeap(std::vector<int>&);
