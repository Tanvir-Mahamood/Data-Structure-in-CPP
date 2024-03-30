/*
Merge 2 Linked List in a sorted manner. Each element of the linked list is double valued.
Sample:

Enter first Linked list:
3
30 40
10 20
50 60
Enter second Linked list:
4
35 45
5 15
25 35
75 85
Linked list-1 + Linked list-2 = 75-85 35-45 30-40 25-35 10-20 50-60 5-15

(Incomplete)
*/

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data1;
    int data2;
    struct node* link;
};

struct node *h1,*h2;

void insert_end_1(int value1,int value2)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data1=value1;
    temp->data2=value2;
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

void insert_end_2(int value1,int value2)
{
    struct node* txz;
    txz=h1;
    while(txz != NULL)
    {
        if(txz->data2==value2)
        {
            txz->data1+=value1;

            value1=0;
        }
        txz=txz->link;
    }
    if(value1 != 0)
    {
        struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
        temp->data1=value1;
        temp->data2=value2;
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
}


void joint_sorted(int value1,int value2)
{
    struct node* temp1=(struct node*)malloc(sizeof(struct node)); //new node created
    temp1->data1=value1;
    temp1->data2=value2;
    if(h1==NULL || (temp1->data2 > h1->data2))
    {
        temp1->link=h1; // same as temp->link=NULL
        h1=temp1;
    }
    else
    {
        struct node* pred=h1;
        struct node* p=pred->link;
        while((p != NULL) && (temp1->data2 < p->data2))
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
        cout<<temp->data1<<"-"<<temp->data2<<" ";
        temp=temp->link;
    }
}


int main()
{
    h1=NULL;
    h2=NULL;
    int n,i,element1,element2;
    cout<<"Enter first Linked list:\n";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>element1>>element2;
        insert_end_1(element1,element2);
    }

    cout<<"Enter second Linked list:\n";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>element1>>element2;
        insert_end_2(element1,element2);
    }


    struct node* ttmp;
    ttmp=h2;
    while(ttmp != NULL)
    {
        joint_sorted(ttmp->data1,ttmp->data2);
        ttmp=ttmp->link;
    }


    joint_print();
    return 0;
}


