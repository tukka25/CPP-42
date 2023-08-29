#include "Array.hpp"

int main(void)
{
	Array<int> a(5);

	// std::cout << f[4] << std::endl;
	// Array<int> b(a);
	// Array<int> v;
	// int *f = new int();
	for (int i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	a.PrintArr();
	std::cout << "a Arr" << std::endl;
	std::cout << "----------------------" << std::endl;

	Array<int> b;
	b = a;
	b.PrintArr();
	std::cout << "b Arr" << std::endl;
	std::cout << "----------------------" << std::endl;
	// std::cout << a[4] << std::endl;
	// std::cout << a[0] << std::endl;
	// (void)a;
}