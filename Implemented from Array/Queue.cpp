#include <bits/stdc++.h>
#define n 5 //Capacity of Queue
using namespace std;
int Front=-1;
int Rear=-1;
int Queue[n];

void enqueue(int x)
{
    if(Rear==n-1) cout<<"Overflow\n";
    else if(Front==-1 && Rear==-1)
    {
        Front=Rear=0;
        Queue[Rear]=x;
    }
    else
    {
        Rear++;
        Queue[Rear]=x;
    }
}

void dequeue()
{
    if(Front==-1 && Rear==-1) cout<<"Underflow\n";
    else if(Front==Rear) Front=Rear=-1;
    else Front++;
}

void display()
{
    if(Front==-1 && Rear==-1) cout<<"Queue is empty\n";
    else
    {
        for(int i=Front; i<=Rear; i++) cout<<Queue[i]<<" ";
    }
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(10);
    enqueue(13);
    dequeue();
    enqueue(14);
    dequeue();
    display();

    return 0;
}
