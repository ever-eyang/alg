#include <iostream>
#include <vector>

template <typename T> void PrintVector(std::vector<T>& vec) {
	for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}
