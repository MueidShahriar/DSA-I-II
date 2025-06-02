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
    int i,n;

///create new node

    printf("Enter number of node: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=(struct link*)malloc(sizeof(struct link));
        printf("Enter a data: ");
        scanf("%d",&p->data);
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
        printf("\n%d    %d    %d",p,p->data,p->next);
        p=p->next;
    }

///Insert as a first node///

    int y;
    printf ("\n\nEnter your first data: ");
    scanf ("%d", &y);
    p=(struct link*)malloc(sizeof(struct link));
    p ->data = y;
    p ->next = h;
    h = p;
    printf ("Insert First Successfully");
    for(;;)
    {
        if(p==0)
        break;
        printf("\n%d    %d    %d",p,p->data,p->next);
        p=p->next;
    }

///Insert as a last node///

    int z;
    printf ("\n\nEnter your last data: ");
    scanf ("%d", &z);
    p = (struct link*) malloc (sizeof(struct link));
    p->data = z;
    q ->next = p;
    p->next = 0;
    printf ("Insert Last Successfully");
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d    %d    %d",p,p->data,p->next);
        p=p->next;
    }

///insert as anywhere///

    int c;
    printf ("\n\nAfter which data: ");
    scanf ("%d", &c);
    q = h;
    while (1)
    {
        if (q->data == c)
            break;
        q = q->next;
    }
    printf ("Enter your data: ");
    p = (struct link*) malloc (sizeof(struct link));
    scanf ("%d", &p->data);
    p->next = q -> next;
    q ->next = p;
    printf ("Insert Anywhere Successfully");
    p=h;
    for(;;)
    {
        if(p==0)
            break;
        printf("\n%d    %d    %d",p,p->data,p->next);
        p=p->next;
    }

///delete///

    int a;
    printf ("\n\nEnter which data: ");
    scanf ("%d", &a);
    p = h;
    printf ("Delete Successfully\n");
    while(1)
    {
        if (p->data == a)
        {
        break;
        }
        q = p;
        p = p->next;
        if (p==0)
        break;
    }
    if ( p == h)
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
