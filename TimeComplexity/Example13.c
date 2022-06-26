// Time complexity Example 10
// O(n)

#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, m = 0;
    for (i = 0; i < n; i++)
    {
        for (; j < n; j++)
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