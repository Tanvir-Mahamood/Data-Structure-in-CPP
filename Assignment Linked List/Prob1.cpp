/*
Prob 1: Write an Algorithm to Insert a new node at the beginning of an
existing single linked list. Also write a function to implement the above.

Sample:

5
1 2 3 4 5
Before insertion:1 2 3 4 5
Enter a new value to insert it at the beginning:99
99 1 2 3 4 5
*/

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
    cout<<endl;
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

void insert_front(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=head;
    head=temp;
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
    cout<<"Before insertion:";
    print();
    cout<<"Enter a new value to insert it at the beginning:";
    cin>>element;
    insert_front(element);
    print();
    return 0;
}

