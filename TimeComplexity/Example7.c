// Time complexity Example 7
// Nested Loop c = 3 -> O(n3)

#include <stdio.h>

int fun(int n)
{
    int i = 0, j = 0, k = 0, m = 0;
    i = n;
    for(i = 0;i<n;i++){
        for(j = 0; j < n; j++){
            for(k = 0;k<n;k++){
                m+=1;
            }
        }
    }
    return m;
}

int main(void)
{
    printf("%d\n", fun(10));
}