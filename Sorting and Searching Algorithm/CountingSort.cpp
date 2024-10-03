//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn  "\n"
#define ll  long long
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define mod 1000000007

int get_Max(int A[], int n)
{
    int i, maxx = 0;
    for(i=0; i<n; i++) maxx = max(maxx, A[i]);
    return maxx;
}

void CountingSort(int A[] , int n)
{
    int i, R = get_Max(A, n); //Range

    int output[n], cnt[R+1] = {0};

    for(i=0; i<n; i++)    cnt[A[i]]++;
    for(i=1; i<=R; i++)   cnt[i] += cnt[i-1];
    for(i=n-1; i>=0; i--) output[--cnt[A[i]]] = A[i];
    for(i=0; i<n; i++)    A[i] = output[i];

}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];

    CountingSort(arr, n);

    for(int x : arr) cout << x << " ";
    cout << nn;


    return 0;
}




