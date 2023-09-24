#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template<typename C > void	recSort(C &vec, int begin, int end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    recSort(vec, begin, mid);
    recSort(vec, mid + 1, end);
    // merge(vec, begin, mid, end);
}

template <typename T, typename P> void	sortVector(T container, P pair)
{
	int	i = 0;
	std::vector<int>::iterator	t = container.begin();
	for (; t != container.end(); t++)
	{
		if (i + 1 != (int)container.size())
		{
			pair.push_back(std::make_pair(*t, *++t));
			// this->listpairs.push_back(std::make_pair(*t, *++t));
		}
		++++i;
	}
	std::vector<std::pair<int, int> >::iterator	tf = pair.begin();
	tf = pair.begin();
	std::cout << "after pairing :" << std::endl;
	for (; tf != pair.end(); tf++)
	{
		std::cout << tf->first << std::endl << tf->second << std::endl;
	}
	tf = pair.begin();
	for (; tf != pair.end(); tf++)
	{
		if (tf->first < tf->second)
			std::swap(tf->first, tf->second);
	}
	tf = pair.begin();
	std::cout << "after sort pairs :" << std::endl;
	for (;tf != pair.end(); tf++)
	{
		std::cout << tf->first << std::endl;
	}
    recSort(pair, 0, pair.size() - 1);
	tf = pair.begin();
	std::cout << "after sort a pairs :" << std::endl;
	std::cout << "len after f-j = " << pair.size() << std::endl;
	for (;tf != pair.end(); tf++)
	{
		std::cout << tf->first << std::endl;
	}
	// exit(0);
	// tf = pair.begin();
	container.clear();
	tf = pair.begin();
	for (; tf != pair.end();tf++)
	{
		container.push_back(tf->first);
	}
	std::cout << std::endl;
	// binarySearchInsert(pair);
	if (!std::is_sorted(container.rbegin(), container.rend()))
		std::cout << "not Sorted" << std::endl;
	else
		std::cout << "Sorted" << std::endl;
	// printBefSort();
}


#endif