
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *incluso(int *a, int r ,int n){
    int *B=(int *) malloc (sizeof(int) * n * r);
    for(int i=0; i < r; i++){
        for(int j=0; j<n; j++){
            B[ j * r + i ] = a[ i*n+j];
        }
    }
    return B;
}
int main (){
     int A[][5] = {{ 1,2,3,4,6 },
                 { 7,8,9,10,11 },
                 { 12,13,14,15,16 }};
    int *b=incluso(&A[0][0], 3 ,5);
    for(int i=0; i < 5 ; i++){
        for(int j=0; j<3; j++){
            printf("%d ", b[i * 3 + j]);
        }
        printf("\n");
    }
return 0;
}
