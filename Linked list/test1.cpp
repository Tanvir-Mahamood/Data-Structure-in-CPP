#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n=new node(val); //object is created. it will call construtor

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head; //Head is address
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    int number,element,i;
    cin>>number;
    for(i=0;i<number;i++)
    {
        cin>>element;
        insertAtTail(head,element);
    }
    display(head);
    return 0;
}

