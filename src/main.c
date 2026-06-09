#include <stdio.h>

#include "../includes/sort.h"
#include "../includes/utils.h"

void sorting() {
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

}

int main() {
  // sorting();
  int a = 2;
  int b = 4;

  printf("A = %d | B = %d\n", a, b);
  swap(&a, &b);
  printf("A = %d | B = %d\n", a, b);

  return 0;
}
