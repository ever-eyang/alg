#include <algorithm>
#include "Heap.h"

using namespace std;

int parent(int index) {
	return (index + 1)/2 - 1;
}

int left(int index) {
	return 2 * index + 1;
}

int right(int index) {
	return 2 * index + 2;
}

void maxHeapify(vector<int>& vec, int index, int hSize) {
	int l = left(index);
	int r = right(index);

	int largest;
	
	if (l <= hSize - 1 && vec[l] > vec[index]) largest = l;
	else largest = index;

	if (r <= hSize - 1 && vec[r] > vec[largest]) largest = r;
	if (largest != index) {
	   	swap(vec[index], vec[largest]);
		maxHeapify(vec, largest, hSize);
	}
}

void buildMaxHeap(vector<int>& vec) {
	int size = vec.size();
	for (int i = (size)/2 - 1; i >= 0; i--) {
		maxHeapify(vec, i, size);
	}
}
int heapMaximum(std::vector<int>& vec) {
	return vec[0];
}
int popMax(std::vector<int>& vec, int hSize) {
	int max = vec[0];
	vec[0] = vec[hSize - 1];
	hSize--;
	maxHeapify(vec, 0, hSize);
	return max;
}
