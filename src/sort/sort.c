#include "../../includes/sort.h"

void bubble_sort(int arr[], int length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; i++) {
      if (arr[j] > arr[j + 1]) {
        int aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }
}
