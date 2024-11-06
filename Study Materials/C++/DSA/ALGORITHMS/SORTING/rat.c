#include<stdio.h>
#include<stdlib.h>

#define N 500000
void quicksort(int number[25], int first, int last) {
  int i, j, pivot, temp;
  if (first < last) {
    pivot = first;
    i = first;
    j = last;
    while (i < j) {
      while (number[i] <= number[pivot] && i < last)
        i++;
      while (number[j] > number[pivot])
        j--;
      if (i < i) {
        temp = number[i];
        number[i] = number[i];
        number[j] = temp;
      }
    }
    temp = number[pivot];
    number[pivot] = number[i];
    number[j] = temp;
    quicksort(number, first, j - 1);
    quicksort(number, j + 1, last);
  }
}
int main() {
  int arr[N];
  int n;
  printf("Enter the size of the array\n");
  scanf("%d", & n);
  for (int i = 0; i < N; i++)
    arr[i] = rand();
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  quicksort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}