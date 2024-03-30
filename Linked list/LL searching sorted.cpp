#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};

struct node* head; //globally declared

void is_found(int x)
{
    int flag=0,cnt=0;
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        cnt++;
        if((temp->data)==x)
        {
            flag=1;
            cout<<x<<" is found in node number: "<<cnt<<endl;
        }
        if(flag==1 && temp->data != x)
        {
            break;
        }
        temp=temp->link;
    }
    if(flag==0) cout<<"Not found\n";
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
    cout<<"Enter a new data for searching its node:";
    cin>>element;
    is_found(element);
    return 0;
}



