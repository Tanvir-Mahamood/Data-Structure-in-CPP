/*
Prob 7: Write an algorithm to merge two sorted link list pointed by h1 and
h2 respectively into one sorted link list. Use h1 or h2 as the output
list. Do not use the third link list

Sample:

Enter first Linked list:
5
1 3 5 7 9
Enter second Linked list:
5
2 4 6 8 10
Linked list-1 + Linked list-2 = 1 2 3 4 5 6 7 8 9 10

*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node *h1,*h2;

void insert_end_1(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=NULL;
    if(h1==NULL) h1=temp; //head has received address of first node
    else
    {
        struct node* t;
        t=h1;
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
    if(h2==NULL) h2=temp; //head has received address of first node
    else
    {
        struct node* t;
        t=h2;
        while(t->link != NULL) //traversing
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void joint_sorted(int value)
{
    struct node* temp1=(struct node*)malloc(sizeof(struct node)); //new node created
    temp1->data=value;
    if(h1==NULL || (temp1->data < h1->data))
    {
        temp1->link=h1; // same as temp->link=NULL
        h1=temp1;
    }
    else
    {
        struct node* pred=h1;
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

void joint_print()
{
    cout<<"Linked list-1 + Linked list-2 = ";
    struct node* temp;
    temp=h1;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}


int main()
{
    h1=NULL;
    h2=NULL;
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

    struct node* ttmp;
    ttmp=h2;
    while(ttmp != NULL)
    {
        joint_sorted(ttmp->data);
        ttmp=ttmp->link;
    }


    joint_print();
    return 0;
}


