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
  int c=0;
  for(i=0; i<n; i++)
  if(data == a[i])
  {
    printf("%d is found at position %d\n", data, i+1);
    c++;
  }
  printf("Found data %d in %d times\n",data, c);
  return 0;
}