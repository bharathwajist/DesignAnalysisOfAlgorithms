#include <stdio.h>

// Function to swap elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to find the partition position
int partition(int arr[], int low, int high)
{
    // Select the rightmost element as pivot
    int pivot = arr[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            // If element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // Swap element at i with element at j
            swap(&arr[i], &arr[j]);
        }
    }

    // Swap the pivot element with the greater element at i
    swap(&arr[i + 1], &arr[high]);

    // return the partition point
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // find the pivot element such that
        // elements smaller than pivot are on the left of pivot
        // element greater than pivot are on the right of pivot
        int pi = partition(arr, low, high);

        // recursive call on the left of pivot
        quickSort(arr, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(arr, pi + 1, high);
    }
}

// Function to print array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main(void)
{
    int data[] = {8, 7, 2, 1, 0, 9, 6};

    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsortted Array\n");
    printArray(data, n);

    // Performing quickSort on data
    quickSort(data, 0, n - 1);

    printf("Sorted array in ascending order : \n");
    printArray(data, n);
}
