#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    int arr[n]; // Variable-length array (VLA) in C99 and later
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}