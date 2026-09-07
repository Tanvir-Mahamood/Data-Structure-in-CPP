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
    int *arr = (int *)malloc(n * sizeof(int));
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
    printf("\n");

    // Reallocate memory for one more element
    arr = (int *)realloc(arr, (n+1) * sizeof(int));
    if(arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Input the new element
    printf("Enter one more element: ");
    scanf("%d", &arr[n]);

    // Display all elements again
    printf("The elements after reallocation are: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);
    return 0;
}
