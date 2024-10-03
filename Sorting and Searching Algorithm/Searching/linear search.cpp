#include <iostream>
using namespace std;
int main()
{
    int n,i,m,j,x,index=-1;
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
            index=i;
            break;
        }
    }
    if(index>=0) cout<<x<<" found at index "<<index<<endl;
    else cout<<"Not found.\n";

    return 0;
}



