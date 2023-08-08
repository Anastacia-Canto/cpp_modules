
#ifndef _PMERGEME_HPP_
# define _PMERGEME_HPP_

#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <vector>
#include <string.h>


class PmergeMe {

	private:

		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & rhs);

		static bool validateAndStore(char ** input);
		static void checkContainers(void);
		static std::vector<int> mergeSortVector(std::vector<int> &vec);
		static void mergeVector(std::vector<int> &sorted, int elem);
		static void insertionVector(std::vector<std::vector<int>> &pairs);
	

	public:
		static void sort(char ** input);

};


#endif