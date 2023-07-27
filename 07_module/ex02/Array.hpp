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
		Array<T>(void) {
			_size = 0;
			_myArr = new T[0];
		}

		Array<T>(unsigned int n) {
			_size = n;
			_myArr = new T[n];
		}

		Array<T>(Array const & src) {
			_size = src.size();
			_myArr = new T[src.size()];
		}

		Array<T> & operator=(const Array<T> & rhs) {
			delete [] _myArr;
			_size = rhs.size();
			_myArr = new T[rhs.size()];
			for(unsigned int i = 0; i < rhs.size(); i++) {
				_myArr[i] = rhs[i];
			}
			return *this;
		}
		~Array<T>(void) {
			delete [] _myArr;
		}

		unsigned int size(void) const {
			return _size;
		}

		T & operator[](int index) const {
			if (index >= _size) {
				throw std::exception();
			}
			return _myArr[index];
		}


};


#endif