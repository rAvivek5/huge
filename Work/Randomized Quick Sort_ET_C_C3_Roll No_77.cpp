#include <iostream>
#include <cstdlib>

using namespace std;

//Swap Function
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Print array
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

//Partitioning Function
int Partition(int a[], int low, int high)
{
    int i;
    int pivot = high;
    int index = low;

    for (i = low; i < high; i++)
    {
        if (a[i] < a[pivot])
        {
            swap(&a[i], &a[index]);
            index++;
        }
    }
    swap(&a[pivot], &a[index]);
    return index;
}

// Random selection of pivot
int RandomPivotPartition(int a[], int low, int high)
{
    int pvt, n, temp;
    n = rand();
    pvt = low + n % (high - low + 1);
    swap(&a[high], &a[pvt]);
    return Partition(a, low, high);
}

// Quick Sort algorithm.
int QuickSort(int a[], int low, int high)
{
    int pindex;
    if (low < high)
    {
        pindex = RandomPivotPartition(a, low, high);
        QuickSort(a, low, pindex - 1);
        QuickSort(a, pindex + 1, high);
    }
    return 0;
}

int main()
{
    int x[] = {9, 5, 0, 1, 15, 2, 6, 3, 99, 12};
    int n = sizeof(x) / sizeof(x[0]);
    int i;

    cout << "Number of array elements: \n"
         << n << "\n";

    cout << "Unsorted Array: \n";
    printArray(x, n);

    QuickSort(x, 0, n - 1);

    cout << "Sorted Array in ascending order: \n";
    printArray(x, n);
    return 0;
}