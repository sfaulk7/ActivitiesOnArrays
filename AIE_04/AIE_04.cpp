

#include <iostream>


void SortArray(int* arr, int count);
bool IsArraySorted(const int* arr, int count);

int main(int argc, char** argv)
{
	const int NUM_ITEMS = 8;
	int numbers[NUM_ITEMS] = { 13, 1, 7, 5, 11, 9, 15, 3 };

	SortArray(numbers, NUM_ITEMS);

	std::cout << "Problem 4: Sort Array\n" << std::endl;

	// Test: all values should be sorted in ascending order
	if (IsArraySorted(numbers, NUM_ITEMS)) std::cout << "Pass: the array is sorted" << std::endl;
	else std::cout << "Fail: the array is not sorted" << std::endl;

	//Print the array
	for (int i = 0; i < NUM_ITEMS; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	std::cout << "\nDONE" << std::endl;

	return 0;
}

bool IsArraySorted(const int* arr, int count)
{	
	for (int i = 0; i < count - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}


void SortArray(int* arr, int count)
{
	// TODO: 
	// modify the values in the array so that when this method returns
	// all values are sorted in ascending order

	for (int i = 0; i < count; i++)
	{
		int smallNumber = 100;
		int arrayNumber = i;

		//Cycle through and find the smallest number in the array
		for (int j = i; j < count; j++)
		{
			int currentNumber = arr[j];

			if (currentNumber < smallNumber)
			{
				smallNumber = currentNumber;
			}
		}

		//Cycle through and find where the smallest number is in the array 
		//and replace the current number on the array with the smallest number
		for (int j = i; j < count; j++)
		{
			int currentNumber = arr[j];

			if (currentNumber == smallNumber)
			{
				arr[j] = arr[i];
				arr[i] = smallNumber;
			}
		}
	}
	return;
}
