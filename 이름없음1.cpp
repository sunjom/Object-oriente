#include <iostream>

int main() {
	int a = 5, b = 10, c;

	std::cout << (a != b) << std::endl;
	std::cout << (b % a) << std::endl;
	std::cout << ((a > b) ? a : b) << std::endl;
	std::cout << sizeof(a) << std::endl;
	c = a++;
	std::cout << c << std::endl;
	a += b;
	std::cout << a << std::endl;
	std::cout << (a & b) << std::endl;
	c = (a + b, a - b);
	std::cout << c << std::endl;
	c = (a + b, a - b, a * b);
	std::cout << c << std::endl;

	return 0;
}


