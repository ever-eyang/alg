#include <vector>

int parent(int index);
int left(int index);
int right(int index);
void maxHeapify(std::vector<int>&, int index, int hSize);
void buildMaxHeap(std::vector<int>&);
int heapMaximum(std::vector<int>&);
int popMax(std::vector<int>&, int hSize);
void increaseKey(std::vector<int>&, int index, int key);
void maxHeapInsert(std::vector<int>&, int key, int hSize);
