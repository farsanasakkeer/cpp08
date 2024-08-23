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
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){}
        MutantStack(const MutantStack &other) : std::stack<T>(other){}
        MutantStack &operator=(const MutantStack &other)
        {
            std::stack<T> ::operator=(other);//all the elements in the other stack are copied to the current stack (*this).
            return(*this);
        }
        ~MutantStack() {} 

        typedef typename std::stack<T>::container_type::iterator iterator;
        /*instead of writing the full type std::stack<T>::container_type::iterator every time, 
        you can just write iterator, making the code cleaner and more readable.*/

        iterator begin() { return (this->c.begin()); }
        iterator end() { return (this->c.end()); }
};



#endif