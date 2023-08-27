#include "Templates.hpp"

int main(void)
{
	Templates	t;

	int i = 9;
	int k = 5;
	int a = 1;
	int b = 2;

	std::cout << ::min(i, k) << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
}