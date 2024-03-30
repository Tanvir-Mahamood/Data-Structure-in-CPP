/*
Prob 6: Write an algorithm to find the highest value.
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

void find_max()
{
    struct node* t;
    t=head;
    int maxx=0;
    while(t != NULL)
    {
        if(t->data>maxx) maxx=t->data;
        t=t->link;
    }
    cout<<"Maximum element : "<<maxx<<endl;
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
    //print();
    find_max();
    return 0;
}

