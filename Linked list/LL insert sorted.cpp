#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node* head; //globally declared

void print()
{
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void insert_end(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=NULL;
    if(head==NULL) head=temp; //head has received address of first node
    else
    {
        struct node* t;
        t=head;
        while(t->link != NULL) //traversing
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void insert_sort(int value)
{
    struct node* temp1=(struct node*)malloc(sizeof(struct node)); //new node created
    temp1->data=value;
    if(head==NULL || (temp1->data < head->data))
    {
        temp1->link=head; // same as temp->link=NULL
        head=temp1;
    }
    else
    {
        struct node* pred=head;
        struct node* p=pred->link;
        while((p != NULL) && (temp1->data > p->data))
        {
            pred=p;
            p=p->link;
        }
        pred->link=temp1;
        temp1->link=p;
    }
}


int main()
{
    head=NULL;
    int n,i,element;
    cin>>n;
    for(i=0; i<n; i++) //input sorted linked list
    {
        cin>>element;
        insert_end(element);
    }
    cout<<"Before insertion:\n";
    print();
    cout<<"\nEnter new data to store in previous linked list:";
    cin>>element;
    insert_sort(element);
    cout<<"After insertion:\n";
    print();
    return 0;
}

