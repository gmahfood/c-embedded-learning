#include <iostream>

void reverseArray(int* arr, int size) {
  int* left = arr;
  int* right = arr + size - 1;

  while (left < right) {
    int temp = *left;
    *left = *right;
    *right = temp;
    left++;
    right--;
  }
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);

  reverseArray(arr, n);

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
