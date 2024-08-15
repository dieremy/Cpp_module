#include "PmergeMe.hpp"


int main(int argc, char **argv) {
	struct timeval start, end;
	long long sec, usec;
	long long span;

	if (argc < 2) {
		std::cerr << "Error" << std::endl;
		return 2;
	}

	PmergeMe pm = PmergeMe(argv);
	pm.parseInput();


	// List
	pm.printList("Before: ");

	gettimeofday(&start, NULL);
	pm.mergeInsertionSortList();
	gettimeofday(&end, NULL);

	sec = end.tv_sec - start.tv_sec;
	usec = end.tv_usec - start.tv_usec;
	span = (sec / 1000000) + (usec);
	pm.printList("After: ");
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << span << " us\n";


	// Deque
	//	pm.printDeque("Before: ");
	gettimeofday(&start, NULL);
	pm.mergeInsertionSortDeque();
	gettimeofday(&end, NULL);

	sec = end.tv_sec - start.tv_sec;
	usec = end.tv_usec - start.tv_usec;
	span = (sec / 1000000) + (usec);
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << span << " us\n";

	//	pm.printDeque("After: ");
	return 0;
}