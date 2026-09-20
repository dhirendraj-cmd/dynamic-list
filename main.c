#include "dynmvector.h"
#include <stdlib.h>
#include <stdio.h>


int main(){

    // python type list: lst=[]
    list(lst);

    for(int i=1; i<=100; i++){
        append(lst, i);
    }

    printf("There are total %zu elements in list, printing all elements from list\n", lst->length);
    printList(lst);
    printf("\n");

    freeList(lst);

    return 0;
}

