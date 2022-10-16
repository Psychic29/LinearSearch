#include <stdio.h>
int linearSearch(int arr[], int n, int val) {
  for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        return i+1;
    }
  return -1;
}
int main() {
  int arr[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};
  int val = 41;
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = linearSearch(arr, n, val);
  printf("[*] The elements of the array are: ");
  for (int i = 0; i < n; i++)
  printf("%d ", arr[i]);
  printf("\n[*] The element to be searched is: %d", val);
  if (res == -1)
  printf("\n[!] Element is not present in the array");
  else
  printf("\n[+] Element is present at index %d.\n", res);
  return 0;
}
