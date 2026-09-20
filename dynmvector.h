#ifndef DNMVECTOR_H
#define DNMVECTOR_H

#include <stddef.h>


typedef struct
{
    int *arr;
    size_t lenth;
    size_t capacity;
} List;


List* create(size_t initialCapacity);

void append(List *list, int *element);

void freeList(List *lis);


#endif

