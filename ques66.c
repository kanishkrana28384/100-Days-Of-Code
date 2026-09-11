//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
void insertInSortedArray(int arr[], int n, int element) {
    int i;
    // Find the position where the element should be inserted
    for (i = n - 1; (i >= 0 && arr[i]  > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = element; // Insert the new element
}
int main() {
    int arr[100], n, element, i;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    insertInSortedArray(arr, n, element);
    n++; // Increase the size of the array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}