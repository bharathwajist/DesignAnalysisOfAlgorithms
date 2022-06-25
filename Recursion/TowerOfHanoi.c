#include <stdio.h>

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

int main(void){
    int n;
    printf("Enter number of disk you want to shift : \n");
    scanf("%d", &n);
    TowerOfHanoi(n, 'A', 'C', 'B');
    printf("\n");
    return 0;
}

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n == 1){
        printf("\n Move disk 1 from rod %c to %c rod", from_rod, to_rod);
        return;
    }

    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to %c rod", n, from_rod, to_rod);
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
