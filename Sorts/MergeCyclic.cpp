#include "MergeCyclic.h"

using namespace std;

void mergeC(vector<int>& arr, int p, int q, int r) {
	vector<int> aux = vector<int>(arr);
	int i = p;
	int j = q + 1;
	for (int k=p; k <= r; k++) {
		if (i > q) arr[k] = aux[j++];
		else if (j > r) arr[k] = aux[i++];
		else if (aux[j] < aux[i]) arr[k] = aux[j++];
		else arr[k] = aux[i++];
	}
}

void MergeSortA(vector<int>& arr, int p, int r) {
	if (p < r) {
		int q = (p + r)/ 2;
		MergeSortA(arr, p, q);
		MergeSortA(arr, q+1, r);
		mergeC(arr, p, q, r);
	}
}
