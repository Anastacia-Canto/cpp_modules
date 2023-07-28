
#include "Span.hpp"

Span::Span(unsigned int n) : _max(n) {
	_myInts.resize(_max);
	_pos = _myInts.begin();
}

Span::~Span(void) {}

Span::Span(Span const & src) {
	*this = src;
}

Span & Span::operator=(Span const & rhs) {
	_max = rhs.getMax();
	_myInts.resize(_max);
	for (int i = 0; i < _max; i++) {
		std::cout << "rhs " << i << ": " << rhs.getVector()[i] << std::endl;
		_myInts[i] = rhs.getVector()[i];
		std::cout << "myInts " << i << ": " << _myInts[i] << std::endl;
	}

	return *this;
}

unsigned int Span::getMax(void) const {
	return _max;
}

const std::vector<int> Span::getVector(void) const {
	return _myInts;
}

const char * Span::SpanException::what() const throw() {
	return _message;
}

void Span::addNumber(int num) {

	if (_pos == _myInts.end()) {
		throw SpanException("Container is full!");
	}

	unsigned int index = std::distance(_myInts.begin(), _pos);
	_myInts[index] = num;
	_pos++;
}

int Span::shortestSpan(void) {
	if (std::distance(_myInts.begin(), _pos) <= 1) {
		throw SpanException("Too few elements!");
	}

	std::vector<int> sorted(_myInts.begin(), _pos);
	std::sort (sorted.begin(), sorted.end());
	std::vector<int> diff(sorted);
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());
	int shortSpan = *std::min_element(diff.begin(), diff.end());

	return shortSpan;
}

int Span::longestSpan(void) {
	if (std::distance(_myInts.begin(), _pos) <= 1) {
		throw SpanException("Too few elements!");
	}
	
	return (*std::max_element(_myInts.begin(), _pos) - *std::min_element(_myInts.begin(), _pos));
}

void Span::addManyNumbers(unsigned int n) {
	std::srand( time(NULL));
	int actualAmount = std::distance(_myInts.begin(), _pos);
	if (n > _max || n > _max - actualAmount) {
		throw SpanException("Amount is above content capacity!");
	}

	std::generate (_pos, (_pos + n), std::rand);
	_pos = _pos + n;
}