/*
Prob 5. Write an algorithm using link list to delete all the nodes with
value of y.

Sample:

7
1 2 3 3 4 3 5
Enter a value for deletion:3
1 2 4 5

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

void search_delete(int x)
{
    struct node* t1;
    struct node* t2;

    if(head->data==x)
    {
        struct node* temp;
        temp=head;
        head=head->link;
        free(temp);
    }

    t1=head;
    t2=t1->link;

    while(t2 != NULL)
    {
        if(t2->data==x)
        {
            t1->link=t2->link;
            t2=t1->link;
        }
        else
        {
            t1=t1->link;
            t2=t1->link;
        }
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
    cout<<"Enter a value for deletion:";
    cin>>element;
    search_delete(element);
    print();
    return 0;
}

