#include <iostream>
using namespace std;

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head;

void insert_end(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL) head=temp;
    else
    {
        struct node* t;
        t=head;
        while(t->next != NULL)
        {
            t=t->next;
        }
        t->next=temp;
        temp->prev=t;
    }
}

void search_list(int x)
{
    int cnt=0,flag=0;
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        cnt++;
        if(temp->data==x)
        {
            flag=1;
            cout<<"Found at node: "<<cnt<<endl;
        }
        temp=temp->next;
    }
    if(flag==0) cout<<"Not found\n";
}

/*void print()
{
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}*/

int main()
{
    head=NULL;
    int n,i,element;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>element;
        insert_end(element);
    }
    cout<<"Enter a value for searching:";
    cin>>element;
    search_list(element);
    //print();
    return 0;
}

