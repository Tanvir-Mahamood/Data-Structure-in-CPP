//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn  "\n"
#define ll  long long
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define mod 1000000007

void BucketSort(float arr[], int n)
{
    vector<float> b[n]; //Buckets
    for (int i = 0; i < n; i++)
    {
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end()); //  Sort individual buckets

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            arr[index++] = b[i][j]; // Concatenate all buckets into arr[]
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    float arr[n];
    for(i=0; i<n; i++) cin >> arr[i];

    BucketSort(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << nn;

    return 0;
}





