#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int consec(int n,char *s) {

    int count=0;
     for (int i=0; s[i]!='\0';i++){
       if(s[i]=='x')
           count++;
       else count=0;
     }
     if(count>=n)
         return 1;
     else return 0;
 }
int main (){
     printf("%d \n", consec(2, "oxoxoxoxox") );
     printf("%d \n", consec(4, "oxxoxxoxxxoxx") );
    return 0;
}