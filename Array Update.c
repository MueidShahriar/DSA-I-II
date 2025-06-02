#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array Values: ");
        scanf("%d", &a[i]);
    printf("Entered Array is: ");
    for(i= 0; i<n; i++)
    printf("%d ", a[i]);

    int pos, val;
    printf("\nEnter Position: ");
    scanf("%d", &pos);

    printf("Enter Array Values: ");
    scanf("%d", &val);
    a[pos-1] = val;

    printf("After Updating Array is: ");
    for(i= 0; i<n; i++)
    printf("%d ", a[i]);
return 0;
}

