#include "InsertionSort.h"

using namespace std;

void InsertionSort(vector<int>& vec, int p, int q) {
	for (int i = p; i <= q; ++i) {
		int temp = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > temp) {
			vec[j+1] = vec[j];
			j--;
		}
		vec[j+1] = temp;
	}
}
