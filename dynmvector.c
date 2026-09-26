#include "dynmvector.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


List* _internal_create(){
    List *lst = malloc(sizeof(*lst));
    if (!lst) return NULL;

    lst->arr = malloc(4*sizeof(*lst->arr));
    if(!lst->arr){
        free(lst);
        return NULL;
    }

    lst->length = 0;
    lst->capacity=4;

    return lst;
}


void append(List *lst, Elementype element){
    if(!lst) return;

    size_t neededLength;

    neededLength = lst->length + 1;

    if (neededLength > lst->capacity){
        while (neededLength > lst->capacity)
        {
           lst->capacity *= 2;
        }
        
        printf("CURRENT CAPACITY IS %zu, LENGTH HAS EXCEEDED CAPACITY, SO REALLOCATING SIZE\n", lst->capacity);
        Elementype *newarr = realloc(lst->arr, lst->capacity * sizeof(*lst->arr));
        if (!newarr) return;

        lst->arr = newarr;
    }

    lst->arr[lst->length] = element;
    lst->length++;

}

void printList(List *lst){
    printf("[");\
    for(size_t i=0; i<lst->length; i++){
        switch(lst->arr[i].tagtype){
            case TAG_INT:
                printf("%d%s", lst->arr[i].data.i, (i==(lst->length -1) ? "" : ", "));
                break;
            case TAG_FLOAT:
                printf("%.2f%s", lst->arr[i].data.f, (i==(lst->length -1) ? "" : ", "));
                break;
            case TAG_CHAR:
                printf("%c%s", lst->arr[i].data.c, (i==(lst->length -1) ? "" : ", "));
                break;
            case TAG_STRING:
                printf("%s%s", lst->arr[i].data.s, (i==(lst->length -1) ? "" : ", "));
                break;

        }
    }\
    printf("]\n");
}

void freeList(List *lst){
    if(lst){
        for (size_t i = 0; i < lst->length; i++)
        {
            if (lst->arr[i].tagtype == TAG_STRING){
                free(lst->arr[i].data.s);
            }
            
        }
        
        free(lst->arr);
        free(lst);
    }
}

