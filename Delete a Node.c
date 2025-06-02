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
    int x;
    printf("\nEnter which data: ");
    scanf ("%d", &x);
    p = h;
    while(1)
        {
            if (p->data == x)
                {
                    break;
                }
            q = p;
            p = p->next;
            if (p==0)
                break;
        }
    if (p==h)
        h = h->next;
    else
        q->next = p->next;
    p=h;
    for(;;)
        {
            if(p==0)
                break;
            printf("%d    %d    %d\n",p,p->data,p->next);
            p=p->next;
        }
}
