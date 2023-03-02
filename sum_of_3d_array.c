#include <stdio.h>
#define W 3
#define H 4
#define L 5
int sum3d(int arr[W][H][L]){
    int sum=0;
    for(int i=0; i < W; i++){
        for(int j=0; j < H; j++){
            for(int z = 0; z < L; z++){
                sum+=arr[i][j][z];
            }
        }
    }
    return sum;
}
int main() {
    int arr[3][4][5]={{{1,2,1},{1,1,1},{1,1,1}},
                      {{1,1,1}, {1,1,1}, {1,1,1}},
                      {{1,1,1},{1,1,1},{1,1,1}}
    };
    printf("%d\n", sum3d(arr));
    return 0;
}
