#include <iostream>

int main() {
  int arr[] = {5, 3, 8, 1, 9, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  // bubble sort
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;

}
