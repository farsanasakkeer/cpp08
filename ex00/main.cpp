#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    v.push_back(-3);
    v.push_back(3);
    v.push_back(0);

    try
	{
		std::vector<int>::iterator position = easyfind(v,3);
		std::cout << GREEN << "value found: " << *position << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	try
	{
		std::vector<int>::iterator position = easyfind(v, 6);
		std::cout << GREEN << "value found: " << *position << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << '\n';
	}
}