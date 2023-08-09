
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}
PmergeMe::PmergeMe(PmergeMe const & src) { *this = src; }
PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) { return *this; }

static std::list<int> _list;
static std::vector<int> _vector;

// --------------------------------------------- Vector ----------------------------------------------- //

std::vector<int> PmergeMe::mergeSortVector(std::vector<int> &vec) {
	
	int k = vec.size() % 2 == 0 ? vec.size() / 2 : (vec.size() / 2) + 1;

	std::vector<std::vector<int>> pairs;
	for (int i = 0; i < vec.size(); i += 2) {
		std::vector<int> pair;
		pair.push_back(vec[i]);
		if (i < vec.size() - 1) {
			pair.push_back(vec[i + 1]);
		}
		pairs.push_back(pair);
	}

	insertionVector(pairs);
	std::vector<int> sorted;
	for (int i = 0; i < pairs.size(); i++) {
		for (int j = 0; j < pairs[i].size(); j++) {
			mergeVector(sorted, pairs[i][j]);
		}
	}
	
	return sorted;
}

void PmergeMe::insertionVector(std::vector<std::vector<int>> &pairs) {
	for (int i = 0; i < pairs.size(); i++) {
		if (pairs[i].size() == 1) {
			continue ;
		}
		else if (pairs[i][0] > pairs[i][1]) {
			int temp = pairs[i][0];
			pairs[i][0] = pairs[i][1];
			pairs[i][1] = temp;
		}
	}
}

void PmergeMe::mergeVector(std::vector<int> &sorted, int elem) {
	if (sorted.size() > 0) {
		std::vector<int>::iterator i = sorted.begin();
		while (i != sorted.end()) {
			if (elem < *i) {
				sorted.insert(i, elem);
				return ;
			}
			i++;
		}
	}
	sorted.push_back(elem);
 }

// --------------------------------------------- List ----------------------------------------------- //

std::list<int> PmergeMe::mergeSortList(std::list<int> &lst) {

}
// -------------------------------------------------------------------------------------------------- //

bool PmergeMe::validateAndStore(char ** input) {
	int num;
	int i = 1;
	while (input[i] != NULL) {
		if (strncmp(input[i], "0", strlen(input[i])) == 0) {
			num = 0;
		} else {
			num = strtol(input[i], NULL, 10);
			if (num == 0L || num < 0) {
				return false ;
			}
		}
		_list.push_back(num);
		_vector.push_back(num);
		i++;
	}
	
	return true ;
}

void PmergeMe::sort(char ** input) {
	clock_t durationVector;
	durationVector = clock();
	clock_t durationList;
	durationList = clock();
	

	if (validateAndStore(input)) {
		std::vector<int> sortedVector = mergeSortVector(_vector);
		durationVector = clock() - durationVector;

		std::list<int> sortedList = mergeSortList(_list);
		durationList = clock() - durationList;

		std::cout << "Before: ";
		::printContainers(_vector);

		std::cout << "After: ";
		::printContainers(sortedVector);

		std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector<int> : "
		<< static_cast<float>(durationVector)/CLOCKS_PER_SEC  << " seconds" << std::endl;

		std::cout << "Time to process a range of " << _list.size() << " elements with std::list<int> : "
		<< static_cast<float>(durationList)/CLOCKS_PER_SEC  << " seconds" << std::endl;

		
	} else {
		std::cout << "Error" << std::endl;
	}

	return ;
}