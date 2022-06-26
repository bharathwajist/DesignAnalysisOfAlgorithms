// Time complexity Example 6
// O(log(n))

#include <stdio.h>

int fun(int n)
{
    int i = n, m = 0;
    while (i > 0)
    {
        m+=1;
        i=i/2;
    }
    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}