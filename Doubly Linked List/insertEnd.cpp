#include <iostream>
using namespace std;

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head;

void insert_end(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL) head=temp;
    else
    {
        struct node* t;
        t=head;
        while(t->next != NULL)
        {
            t=t->next;
        }
        t->next=temp;
        temp->prev=t;
    }
}

void print()
{
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    int n,i,element;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>element;
        insert_end(element);
    }
    print();
    return 0;
}
