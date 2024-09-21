#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Key found at index i
        }
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {5, 2, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Key found at index %d\n", index);
    } else {
        printf("Key not found\n");
    }
    return 0;
}
