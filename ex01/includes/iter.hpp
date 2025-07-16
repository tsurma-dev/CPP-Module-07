#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>
#include <stdio.h>

template<typename T, typename Func>
void iter(T* adress, size_t len, Func func_ptr) {
	for (size_t i = 0; i < len; ++i) {
		func_ptr(adress[i]);
	}
}

template <typename T>
void printData(const T& data) {
	putchar(data);
}

#endif
