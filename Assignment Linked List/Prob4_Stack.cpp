//Implement STACK using link list

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
void PUSH(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node)); //new node created
    temp->data=value;
    temp->link=head; // same as temp->link=NULL
    head=temp;
}

void POP()
{
    struct node* t;
    t=head;
    t=t->link;
    head=t;
}


int main()
{
    head=NULL;
    int n,i,element;

    PUSH(1);
    PUSH(3);
    PUSH(3);
    PUSH(2);
    PUSH(11);

    POP();

    print();
    return 0;
}


