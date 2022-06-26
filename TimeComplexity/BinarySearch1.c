// BinarySearch Naive Approach
#include <stdio.h>

int main(void)
{
    int c, first, last, middle, n, search, arr[100];

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integer\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);

    printf("Enter value to find : ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else if (arr[middle] == search)
        {
            printf("%d found at location %d\n", search, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if (first > last)
    {
        printf("Not found! %d isn't present in the list\n", search);
    }
    return 0;
}