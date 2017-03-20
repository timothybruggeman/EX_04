//expand an array
//int* double capacity(const int* list, int size)

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

int* alloc_array(int size)
{
	int* pintarray = new int[size];

	for (int i = 0; i < size; i++)
	{
		pintarray[i] = 0;
	}
	return pintarray;
}

int* doubleCapacity(const int* list, int size)
{
	int* pintarray = new int[size * 2];

	for (int i = 0; i < (size * 2); i++)
	{
		pintarray[i] = 0;
	}

	for (int i = 0; i < size; i++) 
	{
		pintarray[i] = list[i];
	}
	return pintarray;
}

int main()
{
	int nums;
	prompt_count(&nums);

	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);
	int* a = doubleCapacity(numbers, nums);

	for (int i = 0; i < (nums * 2); i++)
	{
		cout << a[i] << endl;
	}

	delete[] numbers;
	delete[] a;
}