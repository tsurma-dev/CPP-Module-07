#include <iostream>
#include "../includes/Array.hpp"

int main(void) {

	int * a = new int();
	std::cout << *a << std::endl;
	delete a;

	Array<int> b(1);
	std::cout << b[0] << std::endl;

	Array<int> c;
	try
	{
		std::cout << c[10] << std::endl;
	}
	catch(Array<int>::outOfBoundsException& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<char> d(26);
	for (int i = 0; i < 26; ++i) {
		d[i] = i + 'A';
	}
	for (int i = 0; i < 26; ++i) {
		std::cout << d[i] << " ";
	}
	std::cout << std::endl;

	Array<std::string> e(2);
	e[0] = "Hello ";
	e[1] = "World!";
	std::cout << e[0] << e[1] << std::endl;

	Array<std::string> f(e);
	std::cout << f[0] << f[1] << std::endl;

	Array<std::string> g;

	Array<std::string> h(3);
	std::cout << h[2] << std::endl;
}
