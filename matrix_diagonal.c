#include <stdio.h>
#include <malloc.h>
int *find_max(int *M, int n, int m){
    int *new=(int *) malloc (sizeof (int));
    int max=0;
    for(int j=0; j < n; j++){
        for(int i=0; i<m; i++){
            if(M[i * m + j ] > max)
                max = M[i * m + j];
        }
        new[j]=max;
        max=0;
    }
    return new;
}
int dominant ( int *M, int n, int m){
    int *a= find_max(M, n , m);
    for(int i=0; i<m; i++){
      if(a[i]!=M[i*m+i])
          return 0;
    }
    return 1 ;
}
int main(){
    int M[4][4]={ {20, 2, 15, 4 },
                  {4, 25, 30, 10},
                  {11, 12, 44, 14},
                  {2, 8, 12, 155},
                  };
    printf("%d ", dominant( &(M[0][0]), 4, 4) );
}
