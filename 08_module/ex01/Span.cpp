
#include "Span.hpp"

Span::Span(unsigned int n) : _max(n) {
	_myInts.resize(_max);
	_amount = 0;
}

Span::~Span(void) {}

Span::Span(Span const & src) {
	*this = src;
}

Span & Span::operator=(Span const & rhs) {
	_max = rhs.getMax();
	_amount = rhs.getAmount();
	_myInts.resize(_amount);
	for (int i = 0; i < _amount; i++) {
		_myInts[i] = rhs.getVector()[i];
	}

	return *this;
}

unsigned int Span::getMax(void) const {
	return _max;
}

unsigned int Span::getAmount(void) const {
	return _amount;
}


const std::vector<int> Span::getVector(void) const {
	return _myInts;
}

const char * Span::SpanException::what() const throw() {
	return _message;
}

void Span::addNumber(int num) {

	if (_amount == _max) {
		throw SpanException("Container is full!");
	}
	_myInts.resize(_amount + 1);
	_myInts[_amount] = num;
	_amount++;
}

int Span::shortestSpan(void) {
	if (_amount <= 1) {
		throw SpanException("Too few elements!");
	}

	std::vector<int> sorted(_myInts.begin(), _myInts.end());
	std::sort (sorted.begin(), sorted.end());
	std::vector<int> diff(sorted);
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());
	int shortSpan = *std::min_element(diff.begin(), diff.end());

	return shortSpan;
}

int Span::longestSpan(void) {
	if (_amount <= 1) {
		throw SpanException("Too few elements!");
	}
	
	return (*std::max_element(_myInts.begin(), _myInts.end()) - *std::min_element(_myInts.begin(), _myInts.end()));
}

int randomNumber(void) {
	return std::rand() % 1000000;
}

void Span::addManyNumbers(unsigned int n) {
	std::srand( time(NULL));

	if (n > _max || n > _max - _amount) {
		throw SpanException("Amount is above content capacity!");
	}

	_myInts.resize(n);

	std::generate (_myInts.begin() + _amount, _myInts.end(), randomNumber);
	_amount = _amount + n;
}