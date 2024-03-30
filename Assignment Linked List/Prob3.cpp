/*
Prob 3: Write an Algorithm to join two existing single linked lists into
one single link list. Also write a function to implement the above.

Sample:

Enter first Linked list:
5
1 2 3 4 5
Enter second Linked list:
4
9 8 7 6
Linked list-1 + Linked list-2 = 1 2 3 4 5 9 8 7 6
*/

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node *head1,*head2;

void insert_end_1(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=NULL;
    if(head1==NULL) head1=temp; //head has received address of first node
    else
    {
        struct node* t;
        t=head1;
        while(t->link != NULL) //traversing
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void insert_end_2(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=NULL;
    if(head2==NULL) head2=temp; //head has received address of first node
    else
    {
        struct node* t;
        t=head2;
        while(t->link != NULL) //traversing
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void joint_them()
{
    struct node* t;
    t=head1;
    while(t->link != NULL)
    {
        t=t->link;
    }
    t->link=head2;
}

void joint_print()
{
    cout<<"Linked list-1 + Linked list-2 = ";
    struct node* temp;
    temp=head1;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}


int main()
{
    head1=NULL;
    head2=NULL;
    int n,i,element;
    cout<<"Enter first Linked list:\n";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>element;
        insert_end_1(element);
    }

    cout<<"Enter second Linked list:\n";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>element;
        insert_end_2(element);
    }

    joint_them();

    joint_print();
    return 0;
}

