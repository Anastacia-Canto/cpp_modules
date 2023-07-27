
#ifndef _ITER_HPP_
# define _ITER_HPP_

#include <iostream>
#include <string>

template <typename T> 
void print(T elem) {
	std::cout << elem << std::endl;
}

template <typename T> 
void iter(T *arr, int len, void (* f)(T t)) {
	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif