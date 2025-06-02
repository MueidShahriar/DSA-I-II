#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter Array Values: ");
    for(i= 0; i<n; i++)
        scanf("%d", &a[i]);
        
    printf("Entered Array is: ");
    for(i= 0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
