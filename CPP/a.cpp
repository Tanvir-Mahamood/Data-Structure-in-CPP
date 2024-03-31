//In the name of Allah, the Gracious, the Merciful
#include <bits/stdc++.h>
#define nn "\n"
using namespace std;

int no_d(int n)
{
    int r,cnt=0;
    while(n != 0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i,num,len,temp,j;
    cin>>num;
    n=no_d(num);
    temp=num;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        a[i]=temp%10;
        temp=temp/10;
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[6-i];
    }
    for(i=0;i<n;i++) cout<<b[i]<<" ";


    return 0;
}

