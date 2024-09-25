#ifndef ITER_HPP_
#define ITER_HPP_

template<typename T>
void iter(T* adress, int len, void (*ptr)(T*)) {
	for (int i = 0; i < len; ++i) {
		ptr(&(adress[i]));
	}
}

template<typename T>
void increment(T* position) {
	(*position)++;
}


#endif
