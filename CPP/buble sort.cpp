#include <iostream>
using namespace std;
int main()
{
    int n,i,temp,j,x;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}



