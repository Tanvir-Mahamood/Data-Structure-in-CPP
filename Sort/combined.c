#include<stdio.h>

void bubleSort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for(i=0; i<n-1; i++)
    {
        minIndex = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        if(minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void insertionSort(int arr[], int n)
{
    int i, j, key, temp;
    for(i=1; i<n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, temp, j, minIndex;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubleSort(arr, n);
    printf("Bubble Sort: ");
    print(arr, n);

    selectionSort(arr, n);
    printf("Selection Sort: ");
    print(arr, n);

    insertionSort(arr, n);
    printf("Insertion Sort: ");
    print(arr, n);

    return 0;
}

