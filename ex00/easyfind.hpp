#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define CYAN           "\033[36m"

#include <algorithm>  // For std::find
#include <stdexcept>  // For std::runtime_error
#include <stdexcept>

template <typename T>

typename T::iterator easyfind(T &container, int value)
{
    typename T ::iterator valuepos = std::find(container.begin(),container.end(),value);
    if (valuepos == container.end())
        throw std::runtime_error("Value not found");
    return(valuepos);
}

#endif