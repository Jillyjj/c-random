#include <stdio.h>
#include <stdlib.h>
 typedef struct list {
    int data;
    struct list *next; /* next == NULL at the end of the list */
} list_t;
int es4(list_t *l){
    int max = 0;
    int newmax=0;
    while(l->next!=NULL){
        if(l->data > 0)
            ++max;
        else {
            if (max > newmax)
                newmax = max;
            else
                max = newmax;
            max=0;
        }
        l=l->next;
    }
    return newmax > max ? newmax + 1: max + 1 ;
}
int main() {
    //l1 {-1, 1, -10, 2, 3, 4, 5}
    /* given that: l2 contains {5, -3, 5, 2, 1, 4, 5, -7, -8, 1,3,4,5,1} */
     /* given that: l1 contains {1,2,3} and l2 contains {5,4,3,2,1} */
   /*  list_t *l1 = malloc (sizeof(list_t)); Salvo romeo
    list_t *n1 = malloc (sizeof(list_t));
    list_t *n2= malloc(sizeof(list_t));
    l1->data=1;
    l1->next=n1;
    n1->data=2;
    n1->next=n2;
    n2->data = 3;
    n2->next= NULL;*/
     list_t *l2 =  malloc (sizeof(list_t));
    list_t *x1 = malloc (sizeof(list_t));
    list_t *x2= malloc(sizeof(list_t));
    list_t *x3 = malloc (sizeof(list_t));
    list_t *x4= malloc(sizeof(list_t));
    list_t *x5 = malloc (sizeof(list_t));
    list_t *x6= malloc(sizeof(list_t));
    l2->data=-1;
    l2->next=x1;
    x1->data=1;
    x1->next=x2;
    x2->data = -10;
    x2->next= x3;
    x3->data=2;
    x3->next=x4;
    x4->data=3;
    x4->next=x5;
    x5->data=4;
    x5->next=x6;
    x6->data=5;
    x6->next=NULL;
    //l1 {-1, 1, -10, 2, 3, 4, 5}
    list_t *l3 = malloc (sizeof(list_t));
    list_t *m1 = malloc (sizeof(list_t));
    list_t *m2 = malloc (sizeof(list_t));
    list_t *m3 = malloc (sizeof(list_t));
    list_t *m4 = malloc (sizeof(list_t));
    list_t *m5 = malloc (sizeof(list_t));
    list_t *m6 = malloc (sizeof(list_t));
    l3->data=-1;
    l3->next=m1;
    m1->data=1;
    m1->next=m2;
    m2->data= -10;
    m2->next=m3;
    m3->data= 2;
    m3->next=m4;
    m4->data=3;
    m4->next=m5;
    m5->data=4;
    m5->next=m6;
    m6->data=5;
    m6->next=NULL;
    printf("%d \n", es4(l2) );
     /* given that: l1 contains {1,2,3} and l3 contains {1,2,7} */
     printf("%d \n", es4(l3) );
    return 0;
}
