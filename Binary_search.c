#include<stdio.h>
#include<stdlib.h>

  int main(){
    int size,search;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
  int arr[size];
    printf("Enter the element in array: ");

  for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
  }
      printf("Enter that element you want to search: ");
      scanf("%d",&search);

}

