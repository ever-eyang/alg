#include <iostream>
#include <vector>

using namespace std;

int main() {

	static const int arr[] = {5,4,1,3,2};
	cout << "sizeof(arr) is: " << sizeof(arr) << endl;
	vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]));

	int i;
	for (i = 1; i < 5; i++) {
	   int temp = vec[i];
	   int j = i - 1;
	   while (j >= 0 && vec[j] > temp) {
		   vec[j + 1] = vec[j];
		   j = j - 1;
	   }
	   vec[j+1] = temp;
	}
	cout << "Hello World"<< endl;
	for (vector<int>::const_iterator a = vec.begin(); a != vec.end(); ++a) {
		cout << *a << ' ';
	}
	cout << endl;
	
}
