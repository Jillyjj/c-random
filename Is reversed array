#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int *reversed_array(int arr[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    return arr;
}
int reverse_compatibility(int *A, int *B, int n){
    int m=n;
    B= reversed_array(B,n);
    for(int i = 0 ; i < n ; i++){
        if(A[i]!=B[i]){
            return 0;
        }
    }
    return 1;
}
int main (){
    int A[] = { 7, 9, 12, 4, 21 };
    int B[] = { 21, 4, 12, 9, 7 };
    int C[] = { 21, 4, 3333333, 9, 7 };
    printf("%d \n", reverse_compatibility( A, B, 5) );
    printf("%d \n", reverse_compatibility( A, C, 5) );

}

