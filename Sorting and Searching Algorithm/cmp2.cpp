//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn  "\n"
#define ll  long long
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define mod 1000000007

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first < b.first) return true;
    if(a.first > b.first) return false;
    if(a.first == b.first)
    {
        if(a.second > b.second) return true;
        else return false;
    }
}

void solve()
{
    int n, i, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    for(i=0; i<n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), cmp);


    for(auto it: v) cout << it.first << " " << it.second << nn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //ll t; cin>>t; while(t--)
    solve();

    return 0;
}


