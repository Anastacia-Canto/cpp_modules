
#include "Span.hpp"

Span::Span(unsigned int n) : _max(n) {
	_myInts.resize(_max);
	_pos = _myInts.begin();
}

Span::~Span(void) {}

Span::Span(Span const & src) {
	_max = src.getMax();
	_myInts.resize(_max);
}

Span & Span::operator=(Span const & rhs) {
	_max = rhs.getMax();
	_myInts.resize(_max);
	return *this;
}

unsigned int Span::getMax(void) const {
	return _max;
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

	unsigned int index = std::distance(_myInts.begin(), _pos - 1);
	unsigned int shortSpan = std::abs(_myInts[1] - _myInts[0]);

	for (unsigned int i = index; i > 0; i--) {
		int span = std::abs(_myInts[i] - _myInts[i - 1]);
		if (span < shortSpan) {
			shortSpan = span;
		}
	}

	return shortSpan;
}

int Span::longestSpan(void) {
	if (std::distance(_myInts.begin(), _pos) <= 1) {
		throw SpanException("Too few elements!");
	}

	unsigned int index = std::distance(_myInts.begin(), _pos - 1);
	unsigned int longSpan = std::abs(_myInts[1] - _myInts[0]);

	for (unsigned int i = index; i > 0; i--) {
		int span = std::abs(_myInts[i] - _myInts[i - 1]);
		if (span > longSpan) {
			longSpan = span;
		}
	}

	return longSpan;
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