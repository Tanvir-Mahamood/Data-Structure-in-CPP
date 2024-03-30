#include <bits/stdc++.h>
#define n 5 //Capacity of Queue
using namespace std;
int Front=-1;
int Rear=-1;
int Queue[n];

void enqueue(int x)
{
    if(((Rear+1)%n)==Front) cout<<"Overflow\n";
    else if(Front==-1 && Rear==-1)
    {
        Front=Rear=0;
        Queue[Rear]=x;
    }
    else
    {
        Rear=(Rear+1)%n;
        Queue[Rear]=x;
    }
}

void dequeue()
{
    if(Front==-1 && Rear==-1) cout<<"Underflow\n";
    else if(Front==Rear) Front=Rear=-1;
    else Front=(Front+1)%n;
}

void display()
{
    int i=Front;
    if(Front==-1 && Rear==-1) cout<<"Queue is empty\n";
    else
    {
        while(i != Rear)
        {
            cout<<Queue[i]<<" ";
            i=(i+1)%n;
        }
        cout<<Queue[Rear];
    }
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(10);
    dequeue();
    dequeue();
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(40);
    display();

    return 0;
}

