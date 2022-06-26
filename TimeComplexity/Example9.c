// Time complexity Example 9
// 
// O(n * sqrt(n)) = O(n^3/2)

#include <stdio.h>
#include <math.h>

int fun(int n)
{
    int i = n, j = 0, m = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < sqrt(n); j++)
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