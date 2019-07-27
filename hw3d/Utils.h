#pragma once
#include <vector>

namespace Utils {
	template <typename T>
	std::vector<T> make_vector(T item) {
		std::vector<T> temp;
		temp.push_back(item);
		return temp;
	}
	template <typename T>
	bool has(std::vector<T> list, T item) {
		for (int i = 0; i < list.size(); i++) {
			if (list.at(i) == item) {
				return true;
			}
		}
		return false;
	}

}