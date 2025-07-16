#include "../includes/iter.hpp"
#include "iostream"

int main(void) {
	int array[] = { 'a', 'b', 'c', 'd', 'e' };
	::iter(array, 6, &printData<const int>);
	return (0);
}
