#include <iostream>
using namespace std;
int main()
{
    int n,i,x,Beg,End,Mid,res=-1;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(i=0; i<n; i++) cin>>a[i];
    Beg=0;
    End=n-1;
    cout<<"Enter value";
    cin>>x;
    while(End>=Beg)
    {
        Mid=Beg+(End-Beg)/2;
        if(a[Mid]==x)
        {
            res=Mid;
            break;
        }
        else if(a[Mid]<x) Beg=Mid+1;
        else End=Mid-1;
    }
    if(res<0) cout<<"Not found.\n";
    else cout<<x<<" found at index "<<res<<endl;

    return 0;
}

