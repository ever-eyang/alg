#include <vector>
#include <iostream>
#include "PrintVector.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

using namespace std;

int main() {
	static const int arr[] = {5, 2, 4, 7, 1, 3, 2, 6};
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	int size = vec.size();
	cout << "Initial Vector: ";
	PrintVector(vec);

	vector<int> iVec(vec);
	InsertionSort(iVec, 0, size - 1);
	PrintVector(iVec);

	vector<int> mVec(vec);
	MergeSort(mVec, 0, size - 1);
	PrintVector(mVec);

	vector<int> qVec(vec);
	QuickSort(qVec, 0, size - 1);
	PrintVector(qVec);
}
