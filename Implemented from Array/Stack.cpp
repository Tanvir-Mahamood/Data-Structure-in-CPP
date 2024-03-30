#include<bits/stdc++.h>
#define n 5
using namespace std;
int Top=-1;
int Stack[n];

void Push(int x)
{
    if(Top==n-1) cout<<"Overflow\n";
    else
    {
        Top++;
        Stack[Top]=x;
    }
}

void Pop()
{
    if(Top==-1) cout<<"Underflow\n";
    else Top--;
}

void display()
{
    if(Top==-1) cout<<"Stack is empty\n";
    else
    {
        for(int i=Top;i>=0;i--)
        {
            cout<<Stack[i]<<" ";
        }
    }
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Pop();
    Push(40);
    Push(50);
    Push(60);
    display();

    return 0;
}
