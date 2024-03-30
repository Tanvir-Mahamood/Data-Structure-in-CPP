#include<bits/stdc++.h>
using namespace std;
//CSE1202 Lab module 7
//queue
struct node
{
    int data;
    struct node* link;
};

struct node* head;
struct node* reff;

void PUSH(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
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

int main()
{
    head=NULL;
    int i,n,element,op;
    int n_push,n_pop;
    n_push=n_pop=0;

    cout<<"Enter operation:\n\t1.PUSH()\n\t2.POP()\n\t3.Print()\n\t4.Exit\n";
    op=0;
    while(op != 4)
    {
        cout<<"Enter operation:";
        cin>>op;
        if(op==1)
        {
            n_push++;
            cout<<"PUSH()=";
            cin>>element;
            PUSH(element);
        }
        else if(op==2 && n_push>n_pop)
        {
            n_pop++;
            cout<<"POP()";
            POP();
            cout<<endl;
        }
        else if(op==3)
        {
            cout<<"Print()=";
            print();
        }
    }
    return 0;
}




