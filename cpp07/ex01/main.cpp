#include "IterT.hpp"

int main(void)
{
	std::string str = "tukka";

	std::cout << "Basic one using a function" << std::endl;
	Iter(str, 5, toupper);
	std::cout << str << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Done Using Template Function" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Encrypted str = " << str <<  std::endl;
	Iter(str, 5, ::Encryption<char>);
	std::cout << "Encrypted str = " << str <<  std::endl;
	Iter(str, 5, Decryption<char>);
	std::cout << "Decrypted after = " << str <<  std::endl;
}