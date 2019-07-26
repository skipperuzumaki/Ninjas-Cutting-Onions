#pragma once
#include <vector>

namespace Utils {
	template <typename T>
	std::vector<T> make_vector(T item) {
		std::vector<T> temp;
		temp.push_back(item);
		return temp;
	}

}