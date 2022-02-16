#include <iostream>
using namespace std;

//Function to Swap
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Function to Print array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

//Function to rearrange array
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

//Quick Sort algorithm
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int x[] = {9, 5, 0, 1, 15, 2, 6, 3};
    int n = sizeof(x) / sizeof(x[0]);

    //cout << "aaa" << n;

    cout << "Unsorted Array: \n";
    printArray(x, n);

    quickSort(x, 0, n - 1);

    cout << "Sorted Array in ascending order: \n";
    printArray(x, n);
}
