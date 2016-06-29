#pragma once
#include "AbstractSort.h"
#include <algorithm>  
class QuickSort :
	public AbstractSort
{
public:
	QuickSort();
	virtual ~QuickSort();
	void sort(int arr[], int size) override;
private:
	void quickSort(int arr[], int start, int end);
	int partition(int arr[], int start, int end);
};

