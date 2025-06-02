#include <stdio.h>
int main()
{
    int n, i, data;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array values: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter a data to search: ");
    scanf("%d", &data);
    for(i=0; i<n; i++)
        if(data == a[i])
        {
            printf("%d is found at position %d", data, i+1);
            break;
        }
    if(i==n)
        printf("Not Found");
    return 0;
}
