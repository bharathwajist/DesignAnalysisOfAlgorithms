// BinarySearch Recursive Approach
#include <stdio.h>

int binarySearch(int arr[], int f, int l, int k);
int main(void)
{
    int index, c, f, l, n, search, arr[100];

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integer\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);

    printf("Enter value to find : ");
    scanf("%d", &search);

    f = 0;
    l = n - 1;

    index = binarySearch(arr, f, l, search);

    if (index == -1)
    {
        printf("Key not found!\n");
    }
    else
    {
        printf("Key found at %d index,\n", index);
    }
}

int binarySearch(int a[], int first, int last, int key)
{
    int middle;

    // Base condition
    if (first > last)
        return -1;

    middle = (first + last) / 2;

    if (a[middle] == key)
        return middle;
    else if (key > a[middle])
        return binarySearch(a, middle + 1, last, key);
    else
        return binarySearch(a, first, middle - 1, key);
}
