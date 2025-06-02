#include<bits/stdc++.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
int main()
{
    struct link *h = 0, *p=0, *q=0;
    int i,n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter data: ";
        p=(struct link*)malloc(sizeof(struct link));
        cin>>p->data;
        if(h==0)
            h=p;
        else
            q->next=p;
        q=p;
    }
    q->next=h;
    p=h;
    for(i=0; i<n; i++)
    {
        cout<<p<<" "<<p->data<<" "<<p->next<<endl;
        p=p->next;
    }

    /// Insert

    int a;
    cout<<"\nEnter a position : ";
    cin>>a;
    q = h;
    for(i=1; i<a; i++)
    {
        if (q == NULL)
            break;
        q = q->next;
    }
    if (q!= NULL)
    {
        cout<<"Enter your data: ";
        p = (struct link*) malloc (sizeof(struct link));
        cin>>p->data;
        p->next=q->next;
        q ->next = p;
    }
    p=h;
    for(i=0; i<n+1; i++)
    {
        if(p==0)
            break;
        cout<<p<<"  "<<p->data<<"  "<<p->next<<endl;
        p=p->next;
    }

    ///delete

    int b;
    cout << "\nEnter data to delete: ";
    cin >> b;
    p = h;
    q = NULL;
    while (p != NULL && p->data != b)
    {
        q = p;
        p = p->next;
    }
    if (q == NULL)
        h = h->next;
    else
        q->next = p->next;
    p = h;
    for(i=0; i<n; i++)
    {
        cout<<p<<"  "<<p->data<<"  "<<p->next<<endl;
        p=p->next;
    }
}
