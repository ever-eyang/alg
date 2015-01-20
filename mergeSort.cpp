#include <climits>
#include "MergeSort.h"

using namespace std;

void merge(vector<int>& arr, int p, int q, int r) {
	int cLeft = q - p + 1;
	int cRight = r - q;
	int i;
	int j;

	vector<int> vLeft(cLeft + 1, 0);
	vector<int> vRight(cRight + 1, 0);

	for (i=0; i <= cLeft; ++i) {
		vLeft[i] = arr[p + i];
	}
	//sentinel value
	vLeft[cLeft] = INT_MAX;
	for (j=0; j <= cRight; ++j) {
		vRight[j] = arr[q + j + 1];
	}
	vRight[cRight] = INT_MAX;

	i = 0;
	j = 0;

	for (int k=p; k <= r; k++) {
		if (vLeft[i] <= vRight[j]) {
			arr[k] = vLeft[i];
			i++;
		} else {
			arr[k] = vRight[j];
			j++;
		}
	}

}

void MergeSort(vector<int>& arr, int p, int r) {
	//check base case condition
	if (p <  r) {
		//splice in middle
		int q = (p + r)/2;
		MergeSort(arr, p, q);
		MergeSort(arr, q+1, r);
		merge(arr,p, q, r);
	}
}

