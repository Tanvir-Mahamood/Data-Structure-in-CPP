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
void insert_front(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=head; // same as temp->link=NULL
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
        insert_front(element);
    }
    print();
    return 0;
}

