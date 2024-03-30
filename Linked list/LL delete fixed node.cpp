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

void delete_node(int position)
{
    int i;
    if(position==1)
    {
        struct node* temp;
        temp=head;
        head=head->link;
        free(temp);
    }
    else
    {
        struct node* temp1;
        temp1=head;
        for(i=0;i<position-2;i++)
        {
            temp1=temp1->link;
        }
        struct node* temp2;
        temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);
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
    cout<<"Before deletion:\n";
    print();
    cout<<"\nEnter a node for deletion:";
    cin>>element;
    delete_node(element);
    cout<<"After deletion:\n";
    print();
    return 0;
}

