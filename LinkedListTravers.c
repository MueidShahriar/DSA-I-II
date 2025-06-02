#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
};

int main()
{
    struct link *p=0, *h=0, *q=0;
    int i, n;
    printf("Enter number of node: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
      p=(struct link*) malloc(sizeof(struct link));
      printf("Enter a data: ");
      scanf("%d", &p->data);
      if(h==0)
         h=p;
      else
         q->next=p;
         q=p;
    }
    q->next=0;

    for(;;)
    {
        if(h==0)
            break;
        printf("%d    %d    %d\n", h, h->data, h->next);
        h=h->next;
    }
}
