// Time complexity Example 5
// O(log(n))

#include <stdio.h>

int fun(int n)
{
    int i = 1, m = 0;
    while (i < n)
    {
        m+=1;
        i=i+1;
    }
    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}