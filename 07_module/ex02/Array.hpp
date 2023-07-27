#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array {

	private:
		T * _myArr;
		unsigned int _size;
	

	public:
		Array(void) {
			_size = 0;
			_myArr = new T();
		}

		Array(unsigned int n) {
			_size = n;
			_myArr = new T[n];
		}

		Array(Array const & src) {
			_size = src.size();
			_myArr = new T[src.size()];
		}

		Array & operator=(Array const & rhs) {
			delete [] _myArr;
			_size = rhs.size();
			_myArr = new T[rhs.size()];
			for(unsigned int i = 0; i < rhs.size(); i++) {
				_myArr[i] = rhs[i];
			}
			return *this;
		}
		~Array(void) {
			delete [] _myArr;
		}

		unsigned int size(void) const {
			return _size;
		}

		T & operator[](int index) const {
			if (index >= _size) {
				throw OutOfBoundsException();
			}
			return _myArr[index];
		}

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index is out of bounds";
				}
		};
};


#endif