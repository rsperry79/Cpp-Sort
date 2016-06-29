#include "stdafx.h"
#include "QuickSort.h"
#include <algorithm>  
#include <set>


QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}

void QuickSort::sort(int arr[], int size)
{
	auto start = 0;
	auto end = size -1;
	
	quickSort(arr, start, end);
}

int QuickSort::partition(int arr[], int start, int end)
{
	// The pivot element is taken to be the element at
	// the start of the subrange to be partitioned
	auto pivotValue = arr[start];
	auto pivotPosition = start;

	// Rearrange the rest of the array elements to 
	// partition the subrange from start to end
	for (auto pos = start + 1; pos <= end; pos++)
	{
		if (arr[pos] < pivotValue)
		{
			// arr[scan] is the "current" item.
			// Swap the current item with the item to the
			// right of the pivot element
			std::swap(arr[pivotPosition + 1], arr[pos]);
			// Swap the current item with the pivot element
			std::swap(arr[pivotPosition], arr[pivotPosition + 1]);
			// Adjust the pivot position so it stays with the
			// pivot element
			pivotPosition++;
		}
	}
	return pivotPosition;
}

void QuickSort::quickSort(int arr[], int start, int end)
{

	Comparisons++;
	if (start < end)
	{
		// Partition the array and get the pivot point
		auto p = partition(arr, start, end);

		// Sort the portion before the pivot point
		quickSort(arr, start, p - 1);

		// Sort the portion after the pivot point
		quickSort(arr, p + 1, end);
	}

}

