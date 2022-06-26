// Time complexity Example 10
// O(n+(n-1)+(n-2)+...) = O(n(n+1)/2)   // Arithmetic Progression
// O(n2)

#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, m = 0;
    i = n;
    for (i = 0; i < n; i++)
    {
        for (j = i; j > 0; j--)
        {
            m += 1;
        }
    }

    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}