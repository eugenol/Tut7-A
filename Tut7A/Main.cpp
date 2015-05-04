#include <iostream>
#include <cstdlib>
#include <ctime>


template <class T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <class T>
void bubbleSort(T arrayOfT[], int arrLength)
{
	for (int i = 0; i < arrLength-1; i++)
	{
		for (int j = i; j < arrLength; j++)
		{
			if (arrayOfT[j] < arrayOfT[i])
			{
				swap(arrayOfT[j], arrayOfT[i]);
			}
		}
	}
}

template <class T>
int quickSort(T arrayOfT[], int low, int high)
{
	//implement quicksort
	return 0;// just for the outline
}

int main(int argc, char **argv)
{
	const int arrLen = 20;
	int intArray[arrLen] = { 0 };
	srand(time(NULL));

	//fill array
	for (int i = 0; i < arrLen; i++)
	{
		intArray[i] = rand() % 21;
	}

	std::cout << "Unsorted Array" << std::endl;
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	bubbleSort(intArray, arrLen);

	std::cout << "Sorted Array" << std::endl;
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

}