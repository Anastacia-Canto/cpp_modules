
#ifndef _PMERGEME_HPP_
# define _PMERGEME_HPP_

#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <vector>
#include <string.h>
#include <sys/time.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <errno.h>
#include <limits.h>

template <typename T>
void printContainers(T &container) {
	typename T::iterator i = container.begin();
	for (int k = 0; k < 15; k++) {
		if (i == container.end()) {
			break ;
		}
		std::cout << *i << " ";
		i++;
	}
	
	if (i != container.end()) {
		std::cout << " [...]";
	}

	std::cout << std::endl;
}

class PmergeMe {

	private:

		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & rhs);

		static bool validateAndStore(char ** input);
		static bool checkValidCharacters(char ** input, int i);

		static std::vector<int> mergeSortVector(std::vector<int> &vec);
		static std::vector<std::vector<int> > splitVectorPairs(std::vector<int> &vec);
		static void sortVectorPairs(std::vector<std::vector<int> > &pairs);
		static std::vector<int> mergeVector(std::vector<std::vector<int> > &pairs);

		static std::list<int> mergeSortList(std::list<int> &lst);
	

	public:
		static void sort(char ** input);

};


#endif