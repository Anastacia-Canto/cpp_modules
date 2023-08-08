
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}
PmergeMe::PmergeMe(PmergeMe const & src) { *this = src; }
PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) { return *this; }

static std::list<int> _list;
static std::vector<int> _vector;

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

void PmergeMe::checkContainers(void) {
	std::vector<int>::iterator vt = _vector.begin();
	std::cout << "Vector" << std::endl;
	while (vt != _vector.end()) {
		std::cout << *vt << " ";
		vt++;
	}

	std::list<int>::iterator lt = _list.begin();
	std::cout << std::endl << "List" << std::endl;
	while (lt != _list.end()) {
		std::cout << *lt << " ";
		lt++;
	}
	std::cout << std::endl;
}

std::vector<int> PmergeMe::mergeSortVector(std::vector<int> &vec) {
	
	int k = vec.size() % 2 == 0 ? vec.size() / 2 : (vec.size() / 2) + 1;
	std::cout << "k: " << k << std::endl;
	std::vector<std::vector<int>> pairs;
	for (int i = 0; i < vec.size(); i += 2) {
		std::vector<int> pair;
		pair.push_back(vec[i]);
		if (i < vec.size() - 1) {
			pair.push_back(vec[i + 1]);
		}
		pairs.push_back(pair);
	}

	std::cout << "Pairs: " << std::endl;
	for (int i = 0; i < pairs.size(); i++) {
		if (pairs[i].size() == 2) {
			std::cout << pairs[i][0] << " , " << pairs[i][1] << std::endl;
		} else {
			std::cout << pairs[i][0] << std::endl;
		}
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
		std::cout << "pair after insertion: " << pairs[i][0] << " , " << (pairs[i].size() == 2 ? pairs[i][1] : '0') << std::endl;
	}
}

void PmergeMe::mergeVector(std::vector<int> &sorted, int elem) {
	if (sorted.size() == 0) {
		sorted.push_back(elem);
		return ;
	}
	std::vector<int>::iterator i = sorted.begin();
	while (i != sorted.end()) {
		if (elem < *i) {
			sorted.insert(i, elem);
			return ;
		}
		i++;
	}
	sorted.push_back(elem);
 }


void PmergeMe::sort(char ** input) {

	if (validateAndStore(input)) {
		// checkContainers();
		std::vector<int> sorted = mergeSortVector(_vector);

		std::vector<int>::iterator i = sorted.begin();
		std::cout << "Sorted: " << std::endl;
		while (i != sorted.end()) {
			std::cout << *i << std::endl;
			i++;
		}
		
	} else {
		std::cout << "Error" << std::endl;
	}

	return ;
}