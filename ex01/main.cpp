#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11);

        // Print the numbers in the Span
        std::vector<int> numbers = sp.getNumbers();
        std::cout << "Numbers in the Span: ";
        for (size_t i = 0; i < numbers.size(); ++i)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

    try
    {
        std::cout << "-----------------" <<std::endl;
        std::srand(std::time(0)); 
        Span sp = Span(10000);  
        std::vector<int> newNumbers(10000);// Create a vector with 10,000 elements

        // Fill the vector with random numbers
        std::generate(newNumbers.begin(), newNumbers.end(), std::rand);
        sp.addRange(newNumbers.begin(), newNumbers.end());

        // std::vector<int> numbers = sp.getNumbers();
        // std::cout << "Numbers in the Span: ";
        // for (size_t i = 0; i < numbers.size(); ++i)
        // {
        //     std::cout << numbers[i] << " ";
        // }
        // std::cout << std::endl;
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
        std::cout << "-----------------" <<std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	
    return 0;
}