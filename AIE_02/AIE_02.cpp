
#include <iostream>

int MinValue(const int* arr, int count);
int MaxValue(const int* arr, int count);
int CountOccurrencesOfValue(const int* arr, int count, int search);


int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 10;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, -534, 50, 10, 234098657, 30, 40, 50 };

	// In C++, an array is simply a pointer to the first value
	// when passing an array through a function parameter, we loose the length information
	// therefore we need to pass the array size in as well

	// implement the above methods
	// so that the expected output is printed to the console

	std::cout << "Problem 2: Passing arrays to functions\n" << std::endl;

	std::cout << "Expected: -534 - Got: " << MinValue(numbers, NUM_NUMBERS) << std::endl;
	std::cout << "Expected: 234098657 - Got: " << MaxValue(numbers, NUM_NUMBERS) << std::endl;
	std::cout << "Expected: 2 - Got: " << CountOccurrencesOfValue(numbers, NUM_NUMBERS, 10) << std::endl;
	std::cout << "Expected: 0 - Got: " << CountOccurrencesOfValue(numbers, NUM_NUMBERS, 8) << std::endl;

	std::cout << "\nDONE" << std::endl;

	return 0;
}


int MinValue(const int* arr, int count)
{
	// TODO: loop through the array, return the smallest value

	int smallestNumber = arr[1];

	for (int i = 0; i < count; i++)
	{
		
		int currentNumber = arr[i];
		if (currentNumber < smallestNumber) 
		{
			smallestNumber = currentNumber;
		}
	}

	return smallestNumber;
}

int MaxValue(const int* arr, int count)
{
	// TODO: loop through the array, return the largest value

	int biggestNumber = arr[1];

	for (int i = 0; i < count; i++)
	{

		int currentNumber = arr[i];
		if (currentNumber > biggestNumber)
		{
			biggestNumber = currentNumber;
		}
	}

	return biggestNumber;
}

int CountOccurrencesOfValue(const int* arr, int count, int search)
{
	// TODO: loop through the array, return the number of times the search value occurs 

	int numberCount = 0;

	for (int i = 0; i < count; i++)
	{

		int currentNumber = arr[i];
		if (currentNumber == search)
		{
			numberCount++;
		}
	}

	return numberCount;
}

