#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template <typename C>
void	merge(C &vec, int const left, int const mid, int const right)
{
	int	subVecOne = mid - left + 1;
	int	subVectwo = right - mid;

	std::vector<int>	leftVec;
	std::vector<int>	rightVec;

	for (int i = 0; i < subVecOne; i++)
		leftVec.push_back(vec[left + i].first);
	for (int i = 0; i < subVectwo; i++)
		rightVec.push_back(vec[mid + i + 1].first);
	int rightVecInd = 0;
	int leftVecInd = 0;
	int mergedVecInd = left;

	while (leftVecInd < subVecOne && rightVecInd < subVectwo)
	{
		if (leftVec[leftVecInd] > rightVec[rightVecInd])
		{
			vec[mergedVecInd].first = leftVec[leftVecInd];
			leftVecInd++;
		}
		else
		{
			vec[mergedVecInd].first = rightVec[rightVecInd];
			rightVecInd++;
		}
		mergedVecInd++;
	}
	while (leftVecInd < subVecOne)
	{
		vec[mergedVecInd].first = leftVec[leftVecInd];
		mergedVecInd++;
		leftVecInd++;
	}
	while (rightVecInd < subVectwo)
	{
		vec[mergedVecInd].first = rightVec[rightVecInd];
		mergedVecInd++;
		rightVecInd++;
	}
}

template<typename C>
void	recSort(C &vec, int begin, int end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    recSort(vec, begin, mid);
    recSort(vec, mid + 1, end);
    merge(vec, begin, mid, end);
}

template <typename T, typename P> 
void	sortVector(T &container, P &pair, int odd)
{
	int	i = 0;
	typename T::iterator	t = container.begin();
	for (; t != container.end(); t++)
	{
		if (i + 1 != (int)container.size())
			pair.push_back(std::make_pair(*t, *++t));
		++++i;
	}
	typename P::iterator	tf = pair.begin();
	tf = pair.begin();
	for (; tf != pair.end(); tf++)
	{
		if (tf->first < tf->second)
			std::swap(tf->first, tf->second);
	}
    recSort(pair, 0, pair.size() - 1);
	container.clear();
	tf = pair.begin();
	for (; tf != pair.end();tf++)
	{
		container.push_back(tf->first);
	}
	binarySearchInsert(pair, container, odd);
}

template < typename P, typename C>
void	binarySearchInsert(P &t, C &container, int vecOdd)
{
	int	i = 0;

	for (;i < (int)t.size();i++)
		container.insert(container.begin() + returnIndex(t[i].second, container), t[i].second);
	if (vecOdd != -1)
		container.insert(container.begin() + returnIndex(vecOdd, container), vecOdd);
}

template <typename C>
int		returnIndex(int number, C container)
{
	int		i = 0;
	typename C::iterator	t = container.begin();
	for (; t != container.end() && *t > number; t++)
		i++;
	return (i);
}

#endif