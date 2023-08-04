
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
	
	if (vec.size() == 2) {
		return vec;
	}

	std::vector<int> vec1;
	std::vector<int> vec2;

	size_t i = 0;
	while (i < vec.size()) {
		i % 2 == 0 ? vec1.push_back(vec[i]) : vec2.push_back(vec[i]);
		i++;
	}

	mergeSortVector(vec1);
	mergeSortVector(vec2);

	return mergeVector(vec1, vec2);
}

std::vector<int> PmergeMe::mergeVector(std::vector<int> &vec1, std::vector<int> &vec2) {

	std::vector<int> sortedish;

	
}


void PmergeMe::sort(char ** input) {

	if (validateAndStore(input)) {
		// checkContainers();
		mergeSortVector(_vector);
		
	} else {
		std::cout << "Error" << std::endl;
	}

	return ;
}