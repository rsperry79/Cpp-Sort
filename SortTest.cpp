/******************************************************************************
 * Bellevue Class: PROG 113
 *           Term: Spring 2015
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SperryProject8a
 *             File Name: SortTest.cpp
 *
 * This file defines the entry point method, main(), for a C++ Console
 * application. When the executable file is selected for execution, the OS
 * will transfer execution to the first line of code in method main(). Other
 * methods called from main() may be defined here as well.
 *
 * Programmer: Richard Sperry
 *
 * Assigned Project Number: 8a
 *
 *
 * Revision     Date                        Release Comment
 * --------  ----------  ------------------------------------------------------
 *   1.0     05/31/2015  Initial Release

 *
 *
 * Program Inputs
 * --------------
 *  Device                              Description
 * --------  ------------------------------------------------------------------
 * Keyboard  NONE
 *
 * Program Outputs
 * ---------------
 *  Device                            Description
 * --------  ------------------------------------------------------------------
 * Monitor   Sort 1 before, number of sorts, after sort
			Sort 2 before, number of sorts, after sort
 *
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * **** Add name and description of any other methods defined in this file ****
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include <ctime>
#include "SelectionSort.h"
#include "QuickSort.h"

// Name spaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace
                     // "std" are utilized in this program

/******************************************************************************
* Method: main()
* 
* Method Description
* ------------------
* ** For method main(), describe the application program from the client's
* ** perspective, which includes any User inputs required and expected
* ** Console output, and any other pertinent information about the program.
* ** For other methods, describe the functionality of the method.
* ** This WILL take several lines for a satisfactory description!
*
* Pre-Conditions
* --------------
* ** Describe any assumptions made by the method; otherwise specify: None **
*
* Method Arguments
* ----------------
*   Type        Name                        Description
* --------  -------------  ----------------------------------------------------
*                        *** No Arguments supplied ***
*
* Return Value
* ------------
*   Type                              Description
* --------  -------------------------------------------------------------------
* int       Program execution status: 0 - No errors
*
*
* Invoked Methods
* ---------------
*     Name                             Description
* ------------  --------------------------------------------------------------
*
*******************************************************************************
*/
 int main()          
{
	const auto NO_ERRORS = 0;
	const auto SIZE = 20;


	srand(time(nullptr));

	auto testArry = new int[SIZE];
	for (auto i = 0; i < SIZE; i++)
	{
		testArry[i] = rand() % 100 + 1;
	}

	auto testArry2 = new int[SIZE];
	for (auto i = 0; i < SIZE; i++)
	{
		testArry2[i] = rand() % 100 + 1;
	}

	cout << "Before Selection Sort: " << endl;
	for (auto i = 0; i < SIZE; i++)
	{
		cout << " " << testArry[i] << " ";
	}
	cout << endl;

	auto sel = new SelectionSort();
	sel->sort(testArry, SIZE);

	cout << "Selection Sort has " << sel->Comparisons << " comparisons." << endl;
	cout << "After Selection Sort: " << endl;
	for (auto i = 0; i < SIZE; i++)
	{
		cout << " " << testArry[i] << " ";
	}
	cout << endl;




	cout << "Before Quick Sort: " << endl;

	for (auto i = 0; i < SIZE; i++)
	{
		cout << " " << testArry2[i] << " ";
	}
	cout << endl;

	auto qSort = new QuickSort();
	qSort->sort(testArry2, SIZE);
	cout << "Quick Sort has " << qSort->Comparisons << " comparisons." << endl;


	cout << "After Quick Sort: " << endl;
	for (auto i = 0; i < SIZE; i++)
	{
		cout << " " << testArry2[i] << " ";
	}

	// This prevents the Console Window from closing during debug mode using
	// the Visual Studio IDE.
	// Note: Generally, you should not remove this code
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return NO_ERRORS;
}

