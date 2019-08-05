#pragma once
#include <vector>
#include <stdarg.h>

namespace Utils {
	template <typename T>
	std::vector<T> make_vector(T item) {
		std::vector<T> temp;
		temp.push_back(item);
		return temp;
	}

	template <typename T>
	std::vector<T> make_vector(int n_args, ...) {
		va_list ap;
		va_start(ap, n_args);
		std::vector<T> temp;
		for (int i = 2; i < n_args; i++) {
			temp.push_back(va_arg(ap, T));
		}
		va_end(ap);
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