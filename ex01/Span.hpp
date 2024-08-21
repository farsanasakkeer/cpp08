#ifndef SPAN_HPP
#define SPAN_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define CYAN           "\033[36m"

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <ctime>    
#include <iterator>  // For std::back_inserter

class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span();
        Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		Span(unsigned int N);

        void addNumber(int num);
        int shortestSpan() const;
		int longestSpan() const;

        std::vector<int> getNumbers() const;
        template <typename InputIt>
		void addRange(InputIt first, InputIt last)
		{
			std::copy(first, last, std::back_inserter(numbers));
		}
};

#endif