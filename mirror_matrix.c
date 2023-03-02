#include <stdio.h>
#include <malloc.h>
#include <string.h>
int mirror(int *a,int n){
    for(int i=0; i<n; i++){
        for(int j=0 ; j<n;j++){
            if(a[j* n + i ] != a[i * n + j])
                return 0;
        }
    }
return 1;
}

int main() {
    int i;
    int M[4][4] = { { 1, 2, 3, 4 },
                   { 2, 0, 0, 2 },
                    { 3, 0, 0, 2 },
                    { 4, 2, 2, 7 }, };
    printf("%d ", mirror( &(M[0][0]), 4) );
    return 0;
}
