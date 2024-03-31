#include <iostream>
using namespace std;
int main()
{
    int n,i,x,m;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n+1];
    cout<<"Enter elements:";
    for(i=0; i<n; i++) cin>>a[i];
    cout<<"Enter new value and its index:";
    cin>>x>>m;
    if(m<n)
    {
        for(i=n; i>=m; i--) a[i]=a[i-1];
        a[m]=x;
        for(i=0; i<=n; i++) cout<<a[i]<<" ";
    }
    else cout<<"Invalid\n";
}
