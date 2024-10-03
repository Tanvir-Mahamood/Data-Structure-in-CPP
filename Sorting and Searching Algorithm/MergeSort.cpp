//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn  "\n"
#define ll  long long
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define mod 1000000007

vector<int> merge_sort(vector<int> v)
{
    if(v.size() == 1) return v;

    vector<int> v1, v2;
    int half = v.size() / 2;

    for(int i=0; i<half; i++)        v1.push_back(v[i]);
    for(int i=half; i<v.size(); i++) v2.push_back(v[i]);

    v1 = merge_sort(v1);
    v2 = merge_sort(v2);

    v.clear();
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());

    while(!v1.empty() || !v2.empty())
    {
        if(v1.size() >= 1 && v2.size() >= 1)
        {
            if(v1.back() <= v2.back())
            {
                v.push_back(v1.back());
                v1.pop_back();
            }
            else
            {
                v.push_back(v2.back());
                v2.pop_back();
            }
        }
        else if(v1.empty())
        {
            v.push_back(v2.back());
            v2.pop_back();
        }
        else
        {
            v.push_back(v1.back());
            v1.pop_back();
        }
    }
    return v;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    v = merge_sort(v);

    for(int x : v) cout << x << " ";
    cout << nn;

    return 0;
}




