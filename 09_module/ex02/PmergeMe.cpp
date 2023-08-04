
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


void PmergeMe::sort(char ** input) {

	if (validateAndStore(input)) {
		checkContainers();
		
	} else {
		std::cout << "Error" << std::endl;
	}

	return ;
}