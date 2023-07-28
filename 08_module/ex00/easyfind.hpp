
#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Target not found";
		}
};

template <typename T>
void easyfind(T container, int target) {
	
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), target);

	if (it != container.end()) {
		std::cout << "The target is in index " << std::distance(container.begin(), it) << std::endl;
		return ;
	}
	throw NotFound();
}



#endif