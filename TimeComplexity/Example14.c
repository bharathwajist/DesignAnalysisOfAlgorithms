// Time complexity Example 14
// T(n) = O(1+2+4+....+n/2+n)O(n)

#include <stdio.h>

int fun(int n)
{
    int i = 1, j = 0, m = 0;
    for (i = 1; i <= n; i*=2)
    {
        for (; j <= i; j++)
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