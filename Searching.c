#include<stdio.h>
#include <stdbool.h>

 int main()
 {
    int size, elem;
    bool found;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element in array: ");
       for(int i=0;i<size;i++){
           scanf("%d", &arr[i]);
       }
     printf("Enter the element to be search: ");
     scanf("%d", &elem);

        for(int i = 0; i < size; i++)
        {
            if (arr[i] == elem){
                found = true;
                break;
            }
            else{
                found = false;
            }
        }

        if (found){
            printf("Element found in the array");
        }
        else{
            printf("element not found!");
        }
     return 0;
 }