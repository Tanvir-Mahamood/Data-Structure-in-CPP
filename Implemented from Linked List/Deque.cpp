#include<bits/stdc++.h>
using namespace std;
//CSE1202 Lab module 7
//dequeue

struct node
{
    int data;
    struct node* link;
};

struct node* head;

void PUSH_BACK(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(head==NULL)head=temp;
    else
    {
        struct node* t;
        t=head;
        while(t->link != NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void PUSH_FRONT(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=head;
    head=temp;
}

void POP_FRONT()
{
    struct node* t;
    t=head;
    t=t->link;
    head=t;
}

void POP_BACK()
{
    struct node* temp;
    struct node* t;
    temp=head;
    t=head;
    while(temp->link != NULL)
    {
        temp=temp->link;
    }
    while(t->link != temp)
    {
        t=t->link;
    }
    t->link=NULL;
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
    int op,element;
    cout<<"Enter operation:\n";
    cout<<"\t1.Insert at Right end.\n"; //push_back
    cout<<"\t2.Insert at Left end.\n"; //push_front
    cout<<"\t3.Delete at Right end.\n"; //pop_back
    cout<<"\t4.Delete at Left end.\n"; //pop_front
    cout<<"\t5.Print\n";
    cout<<"\t6.Exit\n";
    op=0;
    while(op != 6)
    {
        cout<<"Enter operation:";
        cin>>op;
        if(op==1)
        {
            cout<<"push_back()";
            cin>>element;
            PUSH_BACK(element);
        }
        else if(op==2)
        {
            cout<<"push_front()";
            cin>>element;
            PUSH_FRONT(element);
        }
        else if(op==3)
        {
            cout<<"pop_back()";
            POP_BACK();
            cout<<endl;
        }
        else if(op==4)
        {
            cout<<"pop_front()";
            POP_FRONT();
            cout<<endl;
        }
        else if(op==5)
        {
            cout<<"Print()=";
            print();
        }
    }

    return 0;
}




