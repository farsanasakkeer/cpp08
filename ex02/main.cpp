#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << YELLOW << "\n=============stack=============" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
	mstack.push(17);
	std::cout << GREEN << "Top Value in Mutant Stack: " << mstack.top() << RESET << std::endl;
    mstack.pop();
	std::cout << GREEN << "Top Value in Mutant Stack: " << mstack.top() << RESET << std::endl;

    mstack.push(3);
	mstack.push(5);
	mstack.push(77);
	mstack.push(0);
    mstack.push(7);

    MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
	{
		std::cout << YELLOW <<  *it << RESET << std::endl;
		++it;
	}

	std::cout << GREEN << "Stack size(mstack): " << mstack.size() << RESET << std::endl;
    std::stack<int> s(mstack);
	std::cout << GREEN << "Stack size(s): " << s.size() << RESET << std::endl;

    std::cout << YELLOW << "\n\n=============list=============" << RESET << std::endl;
    std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	list.pop_back();
	list.push_back(3);
	list.push_back(5);
	list.push_back(77);
	list.push_back(0);
    list.push_back(7);
	std::list<int>::iterator listBegin = list.begin();
	std::list<int>::iterator listEnd = list.end();
    while (listBegin != listEnd)
	{
		std::cout << YELLOW <<  *listBegin << RESET << std::endl;
		++listBegin;
	}
    std::cout << GREEN << "list size(list): " << list.size() << RESET << std::endl;
    std::list<int> list2(list);
	std::cout << GREEN << "Stack size(list2): " << list2.size() << RESET << std::endl;

}