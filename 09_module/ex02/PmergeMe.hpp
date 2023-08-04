
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
		static std::vector<int> mergeVector(std::vector<int> &vec1, std::vector<int> &vec2);
	

	public:
		static void sort(char ** input);

};


#endif