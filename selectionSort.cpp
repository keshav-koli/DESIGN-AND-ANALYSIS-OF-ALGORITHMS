#include <stdio.h>

void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4,8,1,97,5,63};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
