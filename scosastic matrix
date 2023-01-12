
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int stoc(double *a,int n){
    int *B=(int *) malloc (sizeof(int) * n );
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            if(a[i * n + j] < 0)
                return 0;
        }
    }

    for(int i=0; i < n; i++){
        double sum=0;
        for(int j=0; j<n; j++){
                sum+=a[ i * n + j];
        }
        if(sum != 1.0)
            return 0;
    }

    return 1;
}
int main (){
     double A[3][3] = { {0.1, 0.5, 0.4}, /* 0.1 + 0.5 + 0.4 = 1.0 */
                        {0.0, 0.5, 0.5}, /* 0.0 + 0.5 + 0.5 = 1.0 */
                        {0.3, 0.4, 0.3} }; /* 0.3 + 0.4 + 0.3 = 1.0 */

     printf( "%d \n", stoc(&A[0][0], 3));

return 0;
}
