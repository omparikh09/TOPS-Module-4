// 2. Write a program of to sort the array using templates.

#include <iostream>
using namespace std;

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) 
{
	int i,j;
    for (i = 0; i < size - 1; i++) 
	{
        for (j = i + 1; j < size; ++j) 
		{
            if (arr[i] > arr[j]) 
			{
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Template function to print an array
template <typename T>
void printArray(T arr[], int size) 
{
	int i;
    for (i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int intArr[] = {5, 2, 9, 1, 5, 6};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "\nInteger array before sorting :- ";
    printArray(intArr, intSize);

    sortArray(intArr, intSize);

    cout << "\nInteger array after sorting :- ";
    printArray(intArr, intSize);

    return 0;
}

