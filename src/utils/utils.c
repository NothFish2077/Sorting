#include <stdio.h>

#include "../../includes/utils.h"

void swap(int* a, int* b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void print_array(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
}
