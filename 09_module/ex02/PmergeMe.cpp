
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}
PmergeMe::PmergeMe(PmergeMe const & src) { *this = src; }
PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) { return *this; }

static std::list<int> _list;
static std::vector<int> _vector;

// --------------------------------------------- Vector ----------------------------------------------- //

std::vector<std::vector<int>> PmergeMe::splitVectorPairs(std::vector<int> &vec) {
	std::vector<std::vector<int>> pairs;

	for (int i = 0; i < vec.size(); i += 2) {
		std::vector<int> pair;
		pair.push_back(vec[i]);
		if (i < vec.size() - 1) {
			pair.push_back(vec[i + 1]);
		}
		pairs.push_back(pair);
	}

	return pairs;
}

void PmergeMe::sortVectorPairs(std::vector<std::vector<int>> &pairs) {
	for (int i = 0; i < pairs.size(); i++) {
		std::sort(pairs[i].begin(), pairs[i].end());
	}
}

std::vector<int> PmergeMe::mergeVector(std::vector<std::vector<int>> &pairs) {
	
	std::vector<int> sorted;
	for (int i = 0; i < pairs.size(); i++) {
		for (int j = 0; j < pairs[i].size(); j++) {
			sorted.insert(lower_bound(sorted.begin(), sorted.end(), pairs[i][j]), pairs[i][j]);
		}
	}

	return sorted;
}

std::vector<int> PmergeMe::mergeSortVector(std::vector<int> &vec) {

	std::vector<std::vector<int>> pairs = splitVectorPairs(vec);
	sortVectorPairs(pairs);
	
	return mergeVector(pairs);
}



// --------------------------------------------- List ----------------------------------------------- //

std::list<std::list<int>> splitListPairs(std::list<int> &lst) {
	std::list<std::list<int>> outerList;
	std::list<int>::iterator it = lst.begin();

	while (it != lst.end()) {
		std::list<int> innerList;
		std::list<int>::iterator actual = it;
		if (std::distance(it, lst.end()) >= 2) {
			std::advance(it, 2);
			innerList.insert(innerList.begin(), actual, it);
		} else if (std::distance(it, lst.end()) == 1) {
			innerList.push_back(*it);
			it++;
		} else {
			std::prev(it);
			innerList.push_back(*it);
			std::advance(it, 2);
		}
		outerList.push_back(innerList);
	}

	return outerList;
}

void sortListPairs(std::list<std::list<int>> & outerList) {
	std::list<std::list<int>>::iterator out = outerList.begin();
	while (out != outerList.end()) {
		std::list<int> inner = *out;
		inner.sort();
		out++;
	}
}

std::list<int> mergeList(std::list<std::list<int>> & outerList) {
	std::list<int> sorted;
	std::list<std::list<int>>::iterator out = outerList.begin();
	while (out != outerList.end()) {
		std::list<int> &innerPointer = *out;
		std::list<int>::iterator inner = innerPointer.begin();
		while (inner != innerPointer.end()) {
			sorted.insert(lower_bound(sorted.begin(), sorted.end(), *inner), *inner);
			inner++;
		}
		out++;
	}

	return sorted;
}

std::list<int> PmergeMe::mergeSortList(std::list<int> &lst) {

	std::list<std::list<int>> outerList = splitListPairs(lst);
	sortListPairs(outerList);
	
	return mergeList(outerList);
}

// -------------------------------------------------------------------------------------------------- //

bool PmergeMe::checkValidCharacters(char ** input, int i) {
	int j = 0;
	while (input[i][j]) {
		if ((!isdigit(input[i][j]) && input[i][j] != '+' && input[i][j] != ' ') || (input[i][j] == '+' && j != 0)) {
			return false;
		}
		j++;
	}
	return true;
}

bool PmergeMe::validateAndStore(char ** input) {
	long num;
	int i = 1;
	while (input[i] != NULL) {
		if (checkValidCharacters(input, i)) {
			if (strncmp(input[i], "0", strlen(input[i])) == 0) {
				num = 0;
			} else {
				num = strtol(input[i], NULL, 10);
				if (errno == EINVAL || errno == ERANGE || num == 0L || num > INT_MAX || num < 0) {
					return false ;
				}
			}
			_list.push_back(num);
			_vector.push_back(num);
		} else {
			return false;
		}
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

		// std::cout << "Is vector sorted? " << std::is_sorted(_vector.begin(), _vector.end()) << std::endl;
		// std::cout << "Is list sorted? " << std::is_sorted(_list.begin(), _list.end()) << std::endl;

		std::cout << "Before: ";
		::printContainers(_vector);

		std::cout << "After: ";
		::printContainers(sortedVector);

		// std::cout << "After - List: ";
		// ::printContainers(sortedList);

		// std::cout << "Is vector sorted? " << std::is_sorted(sortedVector.begin(), sortedVector.end()) << std::endl;
		// std::cout << "Is list sorted? " << std::is_sorted(sortedList.begin(), sortedList.end()) << std::endl;

		std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector<int> : "
		<< static_cast<float>(durationVector)/(static_cast<float>(CLOCKS_PER_SEC) / 1000 ) << " ms" << std::endl;

		std::cout << "Time to process a range of " << _list.size() << " elements with std::list<int> : "
		<< static_cast<float>(durationList)/(static_cast<float>(CLOCKS_PER_SEC) / 1000 ) << " ms" << std::endl;

		
	} else {
		std::cout << "Error" << std::endl;
	}

	return ;
}