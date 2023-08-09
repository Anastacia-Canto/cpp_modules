
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

template <typename T>
void printContainers(T &container) {
	std::vector<int>::iterator i = container.begin();
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
		static std::vector<int> mergeSortVector(std::vector<int> &vec);
		static void mergeVector(std::vector<int> &sorted, int elem);
		static void insertionVector(std::vector<std::vector<int>> &pairs);

		static std::list<int> mergeSortList(std::list<int> &lst);
	

	public:
		static void sort(char ** input);

};


#endif