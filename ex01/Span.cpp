#include "Span.hpp"

Span::Span():N(0)
{}
        
Span::Span(const Span &other): N(other.N),numbers(other.numbers)
{}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
	{
		N = other.N;
		numbers = other.numbers;
	}
	return (*this);
}

Span::~Span()
{}

Span::Span(unsigned int N):N(N)
{}

void Span::addNumber(int num)
{
    if (numbers.size() >= N)
		throw std::overflow_error("cannot add more numbers. capacity exceeded.");
	numbers.push_back(num);
}

int Span::shortestSpan() const
{
    if(numbers.size() < 2)
		throw std::runtime_error("Cannot find span. less than 2 numbers stored.");
	std::vector<int> sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		int currentSpan = sortedNumbers[i] - sortedNumbers[i - 1];
		minSpan = std::min(minSpan, currentSpan);
	}

	return minSpan;
}


int Span::longestSpan() const
{
    if (numbers.size() < 2)
		throw std::runtime_error("Cannot find span. less than two numbers stored.");
	int minNumber = *std::min_element(numbers.begin(), numbers.end());
	int maxNumber = *std::max_element(numbers.begin(), numbers.end());

	return maxNumber - minNumber;
}

std::vector<int> Span::getNumbers() const {
    return numbers;
}