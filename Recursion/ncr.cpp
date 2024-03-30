// Function to calculate the value of nCr using recursion
#include <bits/stdc++.h>
using namespace std;

int comb(int n,int r)
{
    if(r==0 || n==1 || n==r) return 1;
    else if(r==1) return n;
    else return comb(n-1,r-1)+comb(n-1,r);
}

int main()
{
    int n,r;
    cin>>n>>r;
    if(n<r) cout<<"Error\n";
    else cout<<comb(n,r);
}

