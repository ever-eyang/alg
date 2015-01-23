#include <vector>
#include <iostream>
#include "PrintVector.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include "HeapSort.h"

using namespace std;

int main() {
	static const int arr[] = {5, 2, 4, 7, 1, 3, 2, 6};
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	int size = vec.size();
	cout << "Initial Vector: ";
	PrintVector(vec);

	vector<int> iVec(vec);
	InsertionSort(iVec, 0, size - 1);
	cout << "InsertionSort Vector: ";
	PrintVector(iVec);

	vector<int> bVec(vec);
	BubbleSort(bVec, 0, size - 1);
	cout << "BubbleSort Vector: ";
	PrintVector(bVec);

	vector<int> mVec(vec);
	MergeSort(mVec, 0, size - 1);
	cout << "MergeSort Vector: ";
	PrintVector(mVec);

	vector<int> qVec(vec);
	QuickSort(qVec, 0, size - 1);
	cout << "QuickSort Vector: ";
	PrintVector(qVec);

	vector<int> hVec(vec);
	HeapSort(hVec);
	cout << "HeapSort Vector: ";
	PrintVector(hVec);
}
