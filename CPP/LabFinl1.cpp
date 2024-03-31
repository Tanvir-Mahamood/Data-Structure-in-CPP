#include <bits/stdc++.h>
#define nn "\n"
using namespace std;

int main() {
    int i,element,n;
    n=10;
    int ax[n];
    for(i=0;i<n;i++) ax[i]=i+1; //task 1

    queue<int> q;
    for(i=0;i<n;i++)
    {
        q.push(ax[i]); //task 2
    }
    while(!q.empty())
    {
        if(q.front()%2==0) cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}


