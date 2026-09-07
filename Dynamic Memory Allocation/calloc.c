#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Initial allocation
    int *arr = (int *)calloc(n, sizeof(int)); 
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("The elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Free the allocated memory
    return 0;
}