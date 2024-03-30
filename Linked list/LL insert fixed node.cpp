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

void insert_extra(int value,int position)
{
    int i;
    struct node* temp3=(struct node*)malloc(sizeof(struct node)); //new node created
    temp3->data=value;
    if(position==1)
    {
        temp3->link=head;
        head=temp3;
    }
    else
    {
        struct node* temp1=head;
        struct node* temp2=temp1->link;
        for(i=1;i<=position-2;i++)
        {
            temp1=temp2;
            temp2=temp1->link;
        }

        if(temp2->link==NULL)
        {
            temp2->link=temp3;
            temp3->link=NULL;
        }
        else
        {
            temp1->link=temp3;
            temp3->link=temp2;
        }
    }
}


int main()
{
    head=NULL;
    int n,i,element,pos;
    cin>>n;
    for(i=0; i<n; i++) //input sorted linked list
    {
        cin>>element;
        insert_end(element);
    }
    cout<<"Before insertion:\n";
    print();
    cout<<"\nEnter new data to store in previous linked list and its position:";
    cin>>element>>pos;
    insert_extra(element,pos);
    cout<<"After insertion:\n";
    print();
    return 0;
}


