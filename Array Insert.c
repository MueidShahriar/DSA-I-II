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
    n++;

    int pos, val;
    printf("\nEnter Position: ");
    scanf("%d", &pos);
    for(i= n-2; i>=pos-1; i--)
        a[i+1] = a[i];

    printf("Enter a Value: ");
    scanf("%d", &val);
    a[pos-1] = val;

    printf("After Inserting Array is: ");
    for(i= 0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}

