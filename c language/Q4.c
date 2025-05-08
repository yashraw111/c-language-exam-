// Write a C program to find cube of each elements of an 1D array using Pointer.

//

#include <stdio.h>

void cubeArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i] * arr[i];
    }
}
int main(){
        
        int arr[100],n;
        printf("enter the elements of the array :");
        scanf("%d",&n);
    
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
    
        cubeArray(arr, n);
    
        printf("The cube of the array elements is: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    
        return 0;
}