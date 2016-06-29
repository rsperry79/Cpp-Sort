#include "stdafx.h"
#include "SelectionSort.h"


SelectionSort::SelectionSort()
{
}


SelectionSort::~SelectionSort()
{
}

void SelectionSort::sort(int arr[], int size)
{

	for (int i = 0; i < size - 1; i++)
	{
		Comparisons++;
		int pos_min = i;

		for (int j = i + 1; j < size; j++)
		{

			if (arr[j] < arr[pos_min])
				pos_min = j;

		}

		if (pos_min != i)
		{
			int temp = arr[i];
			arr[i] = arr[pos_min];
			arr[pos_min] = temp;
		}

	}
}
