//Insert as a First Node in Linked List

#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
};
struct link *h = 0, *p=0, *q=0,*temp=0;
int main()
{
    int i, n;
    printf("Enter number of node: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=(struct link*)malloc(sizeof(struct link));
        printf("Enter a data: ");
        scanf("%d",&p->data);
        if(h==0)
            h=p;
        else
            q->next=p;
        temp=q;
        q=p;
    }
    q->next=0;
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("%d    %d    %d\n",p,p->data,p->next);
        p=p->next;
    }
    int y;
    printf ("\nEnter your data: ");
    scanf ("%d", &y);
    p=(struct link*)malloc(sizeof(struct link));
    p ->data = y;
    p ->next = h;
    h = p;
    for(;;)
    {
        if(p==0)
            break;
        printf("%d    %d    %d\n",p,p->data,p->next);
        p=p->next;
    }
}