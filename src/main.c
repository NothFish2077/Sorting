#include <stdio.h>
#include "../includes/sort.h"

int main() {
  int arr[] = {8, 3, 10, 2, 4, 7};
  int length = sizeof(arr) / sizeof(arr[0]);

  puts("Array desordenado:\n");

  for (int i = 0; i < length; i++){
    printf(" %d ", arr[i]);
  }

  bubble_sort(arr, length);

  puts("\n\nArray ordenado:\n");

  for (int i = 0; i < length; i++){
    printf(" %d ", arr[i]);
  }

  return 0;
}
