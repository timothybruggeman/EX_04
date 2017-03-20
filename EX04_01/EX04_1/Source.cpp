//read integer for array size
//reads numbers into array
//compute the average
//find how many are above average


#include <iostream>

using namespace std;

void prompt_count(int* size)
{
	cout << "how many numbers will you enter? ";
	cin >> *size;
}

void populate_numbers(int* numbers, int size)
{
	for (int* current = numbers; current < numbers + size; current++)
	{
		cout << "Enter a number: ";
		cin >> *current;
	}
}

int findAverage(int* numbers, int size) {
	int sum = 0;
	for (int* current = numbers; current < numbers + size; current++) {
		sum += *current;
	}
	double average = double(sum / size);
	return average;
}

int aboveAverage(int* numbers, int size) {
	double average = double(findAverage(numbers, size));
	double* paverage = &average;
	
	int integersAboveAverage = 0;
	for (int* current = numbers; current < numbers + size; current++) {
		if (double(*current) > *paverage)
			integersAboveAverage++;
	}
	return integersAboveAverage;
}


int* alloc_array(int size)
{
	int* pintarray = new int[size];

	for (int i = 0; i < size; i++)
	{
		pintarray[i] = 0;
	}
	return pintarray;
}

void main()
{
	int nums;
	prompt_count(&nums);

	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);
	cout << "the average is " << findAverage(numbers, nums) << ", " << endl;
	cout << "with " << aboveAverage(numbers, nums) << " numbers above the average." << endl;


	delete[] numbers;
}