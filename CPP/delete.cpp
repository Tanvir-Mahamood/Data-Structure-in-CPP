#include <iostream>
using namespace std;
int main()
{
    int n,i,m,j,x;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(i=0; i<n; i++) cin>>a[i];
    cout<<"Enter value";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            for(j=i;j<=n-2;j++) a[j]=a[j+1];
        }
    }
    for(i=0;i<=n-2;i++) cout<<a[i]<<" ";

    return 0;
}


