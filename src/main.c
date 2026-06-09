#include <stdio.h>

#include "../includes/sort.h"
#include "../includes/utils.h"

void sorting() {
  int arr[] = {8, 3, 10, 2, 4, 7};
  int length = sizeof(arr) / sizeof(arr[0]);

  puts("Array desordenado:\n");
  print_array(arr, length);

  bubble_sort(arr, length);

  puts("\n\nArray ordenado:\n");
  print_array(arr, length);

}

int main() {
  sorting();

  return 0;
}
