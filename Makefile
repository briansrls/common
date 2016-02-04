all: linked-list binary-search-tree stack queues quicksort

%: %.cc
	g++ -std=c++11 $< -o $@
