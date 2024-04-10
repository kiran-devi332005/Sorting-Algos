//
// Created by Lenovo on 4/7/2024.
//
#include<stdio.h>
#include "bubble_sort_v2.h"
  int main() {
      int size, pass, i, temp, swapped = 1;
      printf("Enter the size of the array: ");
      scanf("%d", &size);
      int arr[size];
      printf("Enter the element of array: ");
      for (i= 0; i < size; i++) {
          scanf("%d", &arr[i]);
      }
          printf("Before sorting my array elements seems like: ");
          for (i = 0; i < size; i++) {
              printf("%d",arr[i]);
          }
          for (pass = size - 1; pass >= 0 && swapped; pass--) {
              swapped = 0;
              for (i = 0; i <= pass - 1; i++) {
                  if (arr[i] > arr[i + 1]) {
                      temp = arr[i];
                      arr[i] = arr[i + 1];
                      arr[i + 1] = temp;
                      swapped = 1;
                  }
              }
          }
          printf("After sorting my array elements seems like: ");
          for (i = 0; i < size; i++) {
              printf("%d\t", arr[i]);

          }
      }
