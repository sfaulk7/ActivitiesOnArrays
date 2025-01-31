

#include <iostream>
#include <string>

const int* BinarySearch(const int* arr, int count, int searchVal);
void TestResult(const int* result, int* const expected);


int main(int argc, char** argv)
{
	const int NUM_ITEMS = 8;
	int arr1[NUM_ITEMS] = { -5, -2, 5, 7, 9, 11, 1234, 74351 };

	// The numbers in the array are assumed to be sorted
	// search for the values 9, 1, 15, 0

	std::cout << "Problem 3: Binary Search\n" << std::endl;

	TestResult( BinarySearch(arr1, NUM_ITEMS, 9),  &arr1[4]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, -5),  &arr1[0]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 74351), &arr1[7]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 0),  nullptr    );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 16), nullptr    );

	std::cout << "\nDONE" << std::endl;

	return 0;
}

void TestResult(const int* result, int* const expected)
{
	if (result == expected)
	{
		std::cout << "PASS: result(" <<
			(result == nullptr ? "nullptr" : std::to_string(*result).c_str()) << ")" << std::endl;
		return;
	}

	std::cout << "FAIL: received(" <<
		(result == nullptr ? "nullptr" : std::to_string(*result).c_str()) << ") expected(" <<
		(expected == nullptr ? "nullptr" : std::to_string(*expected).c_str()) << ")" << std::endl;
}

const int* BinarySearch(const int* arr, int count, int searchVal)
{
	// TODO: Implement a binary search
	// the array is assumed to be sorted

	// This method should:
	//	- Return: nullptr if the value is not found
	//  - Return: pointer to the found value in the array
	
	int left = 0;
	int right = count - 1;

	while (left <= right)
	{
		int middle = (left + right) / 2;

		if (arr[middle] == searchVal)
		{
			return &arr[middle];
		}
		if (arr[middle] < searchVal)
		{
			left = middle + 1;
		}
		if (arr[middle] > searchVal)
		{
			right = middle - 1;
		}
	}

	return nullptr;
}