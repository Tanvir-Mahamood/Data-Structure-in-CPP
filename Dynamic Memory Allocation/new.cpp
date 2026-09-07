#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid input" << endl;
        return 1;
    }

    // Initial allocation using new
    // int *arr = (int *)malloc(n * sizeof(int)); 
    int* arr = new int[n];
    if(arr == nullptr) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    // Input elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display elements
    cout << "The elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free memory using delete[]
    delete[] arr;

    return 0;
}
