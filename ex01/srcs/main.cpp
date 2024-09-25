#include "../includes/iter.hpp"
#include "iostream"

int main( void ) {
	char array[10];
	for (int i = 0; i < 10; ++i) {
		array[i] = i + 'A';
	}
	std::cout << array << "\n";
	::iter(array, 10, &increment);
	std::cout << array << std::endl;
	int arrayb[20];
	for (int i = 0; i < 20; ++i) {
		arrayb[i] = i;
	}
	for (int i = 0; i < 20; ++i)
		std::cout << arrayb[i] << " ";
	std::cout << std::endl;
	::iter(arrayb, 20, &increment);
	for (int i = 0; i < 20; ++i)
		std::cout << arrayb[i] << " ";
	std::cout << std::endl;
}
