// Write a C program to find the sum of elements in an array using a function.


#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    
    int arr[100],n;
    printf("enter the elements of the array :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d ",&arr[i]);
    }
    int result = sumArray(arr, n);
    printf("The sum of the array elements is: %d\n", result);
}