#include <bits/stdc++.h>
using namespace std;
#define nn  "\n"

void Merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for(int i = 0; i < n1; i++) leftArray[i] = arr[left + i];
    for(int j = 0; j < n2; j++) rightArray[j] = arr[mid + 1 + j];

    int i = 0; // Initial index of first sub-array
    int j = 0; // Initial index of second sub-array
    int k = left; // Initial index of merged sub-array

    while(i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j]) arr[k] = leftArray[i++];
        else arr[k] = rightArray[j++];
        k++;
    }

    // remaining elements
    while (i < n1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << nn;
}

int main()
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for(i=0; i<n; i++) cin >> arr[i];

    cout << "Unsorted array:" << std::endl;
    printArray(arr);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array:" << std::endl;
    printArray(arr);

    return 0;
}


