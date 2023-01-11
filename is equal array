
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int quasi_uguali(int *a, int *b, int n){
    for(int i=0; i < n; i++){
        if(a[i]!=b[i]+1)
            return 0;
    }
    return 1;
}
int main (){
  int A[] = { 2,3,4,5,6 };
  int B[] = { 1,2,3,4,5 };
  int C[] = { 2,3,4,5,6 };

  printf("%d \n", quasi_uguali( A, B, 5) );
  printf("%d \n", quasi_uguali( A, C, 5) );
return 0;
}
