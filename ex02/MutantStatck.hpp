#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define CYAN           "\033[36m"

#include <stack>

template <typename T>
class MutantStack{
class MutantStatck : public std::stack<T>
{
	public:

		MutantStatck(): std::stack<T>() {}
		MutantStatck(const MutantStatck &other): std::stack<T>(other){}
		MutantStatck &operator=(const MutantStatck &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStatck(){}

};




#endif
