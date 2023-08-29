#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> a(5);
		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
		}
		a[32] = 0;
		a.PrintArr();
		std::cout << "a Arr" << std::endl;
		std::cout << "----------------------" << std::endl;

		Array<int> b;
		b = a;
		b.PrintArr();
		std::cout << "b Arr" << std::endl;
		std::cout << "----------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}