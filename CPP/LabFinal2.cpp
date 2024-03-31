#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

struct node* h;

void print()
{
    struct node* temp;
    temp=h;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void insert_end(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(h==NULL) h=temp;
    else
    {
        struct node* t;
        t=h;
        while(t->link != NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}


int main()
{
    h=NULL;

    int i,element,n;
    n=100;
    int ax[n];
    for(i=0;i<n;i++) ax[i]=i+1; //task 1

    queue<int> q;
    for(i=0;i<n;i++)
    {
        q.push(ax[i]); //task 2
    }

    while(!q.empty())
    {
        if(q.front()%2==0) insert_end(q.front());
        q.pop();
    }
    print();

    return 0;
}

