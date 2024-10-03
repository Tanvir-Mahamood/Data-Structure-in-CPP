//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn  "\n"
#define ll  long long
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define mod 1000000007

bool cmp1(int a, int b) //ascending
{
    //true  -> a uppore jabe, b niche jabe
    //false -> a niche jabe, b uppore jabe

    if(a < b) return true;
    else return false;
}

bool cmp2(int a, int b) //deascending
{
    if(a > b) return true;
    else return false;
}

void solve()
{
    int n, i;
    cin >> n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), cmp2);

    for(i=0; i<n; i++) cout << v[i] << " ";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //ll t; cin>>t; while(t--)
    solve();

    return 0;
}



