#include<bits/stdc++.h>
using namespace std;

struct link {
    int data;
    struct link *next;
    struct link *prev;
};

void insertNode(struct link *&h, int position, int newData) {
    struct link *p= new link;
    p->data = newData;
    p->next = NULL;
    p->prev = NULL;
    if(position == 1) {
        p->next = h;
        if(h != NULL)
            h->prev = p;
        h = p;
    } else {
        struct link *temp = h;
        for(int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        p->next = temp->next;
        p->prev = temp;
        if(temp->next != NULL)
            temp->next->prev = p;
        temp->next = p;
    }
}

void deleteNode(struct link *&h, int position) {
    struct link *temp = h;
    if(position == 1) {
        h = h->next;
        if(h != NULL)
            h->prev = NULL;
        delete temp;
    } else {
        for(int i = 1; i < position && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp->next != NULL)
            temp->next->prev = temp->prev;
        if(temp->prev != NULL)
            temp->prev->next = temp->next;
        delete temp;
    }
    cout << "Node deleted successfully!\n";
}
void displayList(struct link *h) {
    struct link *temp = h;
    while(temp != NULL) {
        cout << temp->prev << " " << temp << " " << temp->data << " " << temp->next << endl;
        temp = temp->next;
    }
}

int main() {
   
    int n;
    cout << "number of nodes: ";
    cin >> n;

    struct link *h = NULL;
    for(int i = 1; i <= n; i++) {
        struct link *p = new link;
        cout << "Enter node data: ";
        cin >> p->data;
        p->next = NULL;
        p->prev = NULL;

        if(h == NULL)
            h = p;
        else {
            struct link *temp = h;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = p;
            p->prev = temp;
        }
    }
    displayList(h);
    int position;
    cout << "Enter the position to insert a new node: ";
    cin >> position;
    int newData;
    cout << "Enter data for the new node: ";
    cin >> newData;
    insertNode(h, position, newData);

    cout << "List after insertion:\n";
    displayList(h);

    cout << "Enter the position to delete a node: ";
    cin >> position;
    deleteNode(h, position);

    cout << "List after deletion:\n";
    displayList(h);
    return 0;
}