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

void delete_node(int position)
{
    int i;
    if(position==1)
    {
        struct node* temp;
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        struct node *temp1,*temp2,*temp3;
        temp1=head;
        for(i=0; i<position-2; i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        if(temp2->next==NULL)
        {
            temp1->next=NULL;
            free(temp2);
        }
        else
        {
            temp1->next=temp3;
            temp3->prev=temp1;
        }
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
    for(i=0; i<n; i++)
    {
        cin>>element;
        insert_end(element);
    }
    cout<<"Enter the position of node for deletion:";
    cin>>element;
    delete_node(element);
    print();
    return 0;
}

