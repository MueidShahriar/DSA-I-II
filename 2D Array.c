#include <stdio.h>
int main() {
    int a[6][6], i, j;
    for(i=0; i<6; i++) 
    {
        for(j=0; j<6; j++) 
        {
            printf("Enter element for arr[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for(i=0; i<6; i++) 
    {
        for(j=0; j<6; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
