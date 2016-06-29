#pragma once
class AbstractSort
{
public:
	AbstractSort();
	virtual ~AbstractSort();
	int Comparisons;
	virtual void sort(int arr[], int size);
};

