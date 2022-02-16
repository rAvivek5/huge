// Name: Vivek Pundkar
// Roll no.: 77
// Division: C Batch: 3
// Title: Divide and Conquer Merge
// Description
/*
Merge Sort is one of the most popular sorting algorithm 
this algorithms is based on Divide and Conquer algorithm
Here the array is divided into subarrays. Each sub-array
is divided to get individual element of array. 
This all sub-array are merged to get final sorted array
*/
// Input:  12 11 20 13 5 6 7 0
// Output: 0 5 6 7 11 12 13 20

#include <iostream>
using namespace std;

//Function to Merge two subarrays array
void merge(int a[], int p, int q, int r)
{
    // Create subarray Left and Right
    int n1 = q - p + 1;
    int n2 = r - q;

    int Left[n1], Right[n2];
    //Left sub-array contains 5 elements and Right sub-array contains 3 elements

    for (int i = 0; i < n1; i++)
    {
        Left[i] = a[p + i];
    }

    for (int j = 0; j < n2; j++)
    {
        Right[j] = a[q + 1 + j];
    }

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Compare elements of Left and Right sub-array if Left[i] <= Right[j] then place the
    // element Left[i] into array else store Right[j]
    // repeat this untill  i<n1 and j<n2
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            a[k] = Left[i];
            i++;
        }
        else
        {
            a[k] = Right[j];
            j++;
        }
        k++;
    }

    //this while loop will store remaining elements in array
    while (i < n1)
    {
        a[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = Right[j];
        j++;
        k++;
    }
}

// Function to Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int i, int j)
{
    if (i < j)
    {
        int mid = i + (j - i) / 2;

        mergeSort(arr, i, mid); // recurrsively call mergeSort() to divide, sort and merge the subarray
        mergeSort(arr, mid + 1, j);
        merge(arr, i, mid, j); // Merge the sorted subarrays
    }
}

// Function to Print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int a[] = {12, 11, 20, 13, 5, 6, 7, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Number of array elements: " << n << "\n";
    //print the given array
    cout << "\nGiven Array: ";
    printArray(a, n);
    //Function merge sort
    mergeSort(a, 0, n - 1);
    //print the sorted array
    cout << "\nSorted Array: ";
    printArray(a, n);
    cout << "\n";
    return 0;
}