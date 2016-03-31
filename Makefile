all: linked-list binary-search-tree stack queues quicksort
#//test
%: %.cc
	g++ -std=c++11 $< -o $@
