#include <bits/stdc++.h>
using namespace std;
unsigned long long factorial(int a)
{
    if(a != 0) return a*factorial(a-1);
    else return 1;
}

int main()
{
    int n;
    printf("Enter a number:");
    cin>>n;
    unsigned long long res=factorial(n);
    cout<<res<<endl;

    return 0;
}

