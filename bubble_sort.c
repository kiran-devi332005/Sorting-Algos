//
// Created by Lenovo on 4/7/2024.
//

#include <stdio.h>
#include "bubble_sort.h"

int main(){
    int size, temp;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements to the array: \n");
    for(int i=0;i<size;i++)
    printf("Before sorting my array elements seems like: ");
    for(int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }

    // bubble sorting algorithm started
    for(int pass=size-1; pass>=0; pass--){
        for(int i=0; i<=pass-1;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    // end of sorting algo

    printf("After sorting my array elements seems like: ");
    for(int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
}