#include<stdio.h>
#include<malloc.h>

struct link
{
    int data;
    struct link *next;
} ;
struct link *h = 0, *p=0, *q=0,*temp=0;
int main()
{
    int i,x,n;

//create new node
printf("Enter number of node:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=(struct link*)malloc(sizeof(struct link));
        printf("enter data:\n");
        scanf("%d",&p->data);
        p->data=x;
        if(h==0)
        {
            h=p;
        }
        else
        {
q->next=p;
        }
        temp=q;
        q=p;
    }
    q->next=0;
p=h;
for(;;)
{
if(p==0)
        break;
    printf("\n%d       %d          %d\n",p,p->data,p->next);
    p=p->next;
}
}