// Time complexity Example 4
// Nested loop -> O(N+(N-1)+(N-2)+...) = O(N(N+1)/2 == O(N2)

#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, m = 0;
    for (i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            m+=1;
        }
    }
    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}