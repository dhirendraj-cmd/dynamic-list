#ifndef DNMVECTOR_H
#define DNMVECTOR_H

#include <stddef.h>


typedef struct
{
    int *arr;
    size_t length;
    size_t capacity;
} List;


List* create();

void append(List *lst, int element);

void printList(List *lst);

void freeList(List *lis);


#endif

