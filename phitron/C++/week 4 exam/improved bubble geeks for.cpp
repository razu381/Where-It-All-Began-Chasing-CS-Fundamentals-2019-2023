// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size);


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
        cout << "swap " << i+1 << " :";
		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++)
            printArray(arr, n);
            cout << " << ";
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
            printArray(arr, n);
            cout << endl;
    cout << endl;

}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 5, 1, 4, 2, 8};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	return 0;
}
// This code is contributed by rathbhupendra
