#ifndef DNMVECTOR_H
#define DNMVECTOR_H

#include <stddef.h>


typedef struct
{
    int *arr;
    size_t length;
    size_t capacity;
} List;

// create internal function for creating list
List* _internal_create();

void append(List *lst, int element);

void printList(List *lst);

void freeList(List *lis);


// python/Js like list creation
#define list(name) List* name = _internal_create();


#endif

