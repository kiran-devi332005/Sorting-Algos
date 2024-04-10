#include<stdio.h>
#include "selection_sort.h"
int main() {
    int size, i, j, min, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Ente the element of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr[i]);
    }
    printf("Before sorting my array elements seems like: ");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("After sorting my array elements seems like: ");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}