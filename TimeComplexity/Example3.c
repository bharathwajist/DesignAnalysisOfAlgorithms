// Time complexity Example 3
// Nested Loop -> O(n2)
#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, m = 0;
    for (int i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            m+=1;
        }
    }
    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}