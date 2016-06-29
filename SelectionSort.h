#pragma once
#include "AbstractSort.h"
class SelectionSort :
	public AbstractSort
{
public:
	SelectionSort();
	~SelectionSort();
	void sort(int arr[], int size) override;

};

