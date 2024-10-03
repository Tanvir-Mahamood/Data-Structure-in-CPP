#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while(i < j)
    {
        while(arr[i] <= pivot) i++;
        while(arr[j] >  pivot) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}


void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = Partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n,i,element;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++) cin>>arr[i];

    QuickSort(arr, 0,n-1);

    for(i=0; i<n; i++) cout << arr[i] << " ";


    return 0;
}






