#include <algorithm>
#include "BubbleSort.h"

using namespace std;

void BubbleSort(vector<int>& vec, int p, int r) {
	for (int i = p; i < r; i++) {
		for (int j = r; j > i; j--) {
			if (vec[j] < vec[j-1]) {
				swap(vec[j], vec[j-1]);
			}
		}
	}
}
