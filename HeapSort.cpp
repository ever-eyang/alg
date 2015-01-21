#include "Heap.h"
#include <algorithm>

void HeapSort(std::vector<int>& vec) {
	buildMaxHeap(vec);
	int size = vec.size();
	int hSize = size;
	for (int i = size - 1; i > 0; i--) {
		std::swap(vec[0], vec[i]);
		hSize--;
		maxHeapify(vec, 0, hSize);
	}
}
