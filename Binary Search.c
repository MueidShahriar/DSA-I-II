#include<stdio.h>
int main()
{
    int i, data, n, l=0, mid;
    printf("Enter Array size: ");
    scanf("%d", &n);
    int a[n], u = n-1;
    printf("Enter Array values: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\nEnter Searching Data: ");
    scanf("%d", &data);

    mid = (l+u)/2;
    while (l<=u)
    {
        if(data == a[mid])
        {
            printf("%d is Found at Index = %d", data, mid);
            break;
        }
        else if(data > a[mid])
            l = mid + 1;
        else if(data < a[mid])
            u = mid - 1;
        mid = (l+u)/2;
    }
    if(l>u)
        printf("Data Not Found");
    return 0;
}
