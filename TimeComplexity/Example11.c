// Time complexity Example 10
// O(log(n))

#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, m = 0;

    for (i = n; i > 0; i/=2)
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