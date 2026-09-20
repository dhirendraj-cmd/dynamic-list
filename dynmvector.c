#include "dynmvector.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


List* create(){
    List *lst = malloc(sizeof(*lst));
    if (!lst) return NULL;

    lst->arr = malloc(4*sizeof(*lst->arr));
    if(!lst->arr){
        free(lst);
        return NULL;
    }

    lst->length = 0;
    lst->capacity=2;

    return lst;
}


void append(List *lst, int element){
    if(!lst) return;

    size_t addLen, neededLength;

    neededLength = lst->length + 1;

    if (neededLength > lst->capacity){
        while (neededLength > lst->capacity)
        {
           lst->capacity *= 2;
        }
        
        printf("REALLOCATING SIZE\n");
        int *newarr = realloc(lst->arr, lst->capacity * sizeof(*lst->arr));
        if (!newarr) return;

        lst->arr = newarr;
    }

    lst->arr[lst->length] = element;
    lst->length++;

}

void freeList(List *lst){
    if(lst){
        free(lst->arr);
        free(lst);
    }
}

