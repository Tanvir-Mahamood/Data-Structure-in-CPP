#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,val;
    cin>>n;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for(i=2;i<=n-1;i++)
    {
        val=v[i-2]+v[i-1];
        v.push_back(val);
    }
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}
