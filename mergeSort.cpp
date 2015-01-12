#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void merge(vector<int>&, int, int, int);
void mergesort(vector<int>&, int, int);

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

void mergesort(vector<int>& arr, int p, int r) {
	//check base case condition
	if (p <  r) {
		//splice in middle
		int q = (p + r)/2;
		mergesort(arr, p, q);
		mergesort(arr, q+1, r);
		merge(arr,p, q, r);
	}
}

int main() {
	static const int arr[] = {5, 2, 4, 7, 1, 3, 2, 6};

	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

	mergesort(vec, 0, vec.size() - 1);

	for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;
}
