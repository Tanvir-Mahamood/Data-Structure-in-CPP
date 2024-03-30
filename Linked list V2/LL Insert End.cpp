#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node* head; //globally declared
struct node* reff;

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
    if(head==NULL) //head has received address of first node
    {
        head=temp;
        reff=temp;
    }
    else
    {
        reff->link=temp;
        reff=temp;
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
    print();
    return 0;
}
