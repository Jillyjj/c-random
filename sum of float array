#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
float dot(float *A, float *B, int n){
    float sum=0;
    for(int i=0; i<n;i++){
        sum+=A[i]*B[i];
    }
    return sum;
}
int main (){
    float A[] = { 1.0f, 2.0f, 0.0f, 0.0f, 5.0f };
    float B[] = { 2.0f, 1.0f, 3.0f, 0.0f, 1.0f };
    printf("%f \n", dot( A, B, 5) );
    return 0;
}
