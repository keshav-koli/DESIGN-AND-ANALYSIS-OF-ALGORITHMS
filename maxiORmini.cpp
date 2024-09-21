#include <stdio.h>

int main() {
  int n, i, max, min;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  min = arr[0];

  for (i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }

    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("The maximum value is %d\n", max);
  printf("The minimum value is %d\n", min);

  return 0;
}
