#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
   printf("Enter Values: ");
    for(i = 0; i < n; i++)
     
    scanf("%d", &a[i]);
   
    printf("Entered Array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf( "\nDelete Position: ");
    int pos;
    scanf (" %d", &pos);
    for (i = pos-1; i < n-1; i++)
    {
        a[i] = a[i+1];
    }

    printf ("After Deleting array is: ");
    for (i = 0; i < n-1; i++)
    {
        printf ("%d ", a[i]);
    }
}
