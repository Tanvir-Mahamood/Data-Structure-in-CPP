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

void insert_extra(int value,int position)
{
    int i;
    struct node* temp3=(struct node*)malloc(sizeof(struct node)); //new node created
    temp3->prev=NULL;
    temp3->data=value;
    temp3->next=NULL;

    if(position==1)
    {
        temp3->next=head;
        head=temp3;
    }
    else
    {
        struct node *temp1,*temp2;
        temp1=head;
        for(i=1;i<=position-2;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp3;
        temp2->prev=temp3;
        temp3->prev=temp1;
        temp3->next=temp2;
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
    int n,i,element,position;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>element;
        insert_end(element);
    }
    cout<<"Enter new value and position for insertion:";
    cin>>element>>position;
    insert_extra(element,position);
    print();
    return 0;
}

