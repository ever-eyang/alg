#include "QuickSort.h"

using namespace std;

int partition(vector<int>& vec, int p, int r) {
	int x = vec[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j) {
		if (vec[j] <= x) {
			i++;
			swap(vec[i], vec[j]);
		}
	}
	swap(vec[i+1], vec[r]);
	return i + 1;
}

void QuickSort(vector<int>& vec, int p, int r) {
	if (p < r) {
		int q = partition(vec, p, r);
		QuickSort(vec, p, q - 1);
		QuickSort(vec, q + 1, r);
	}
}

