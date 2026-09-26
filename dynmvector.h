#ifndef DNMVECTOR_H
#define DNMVECTOR_H

#include <stddef.h>


// define tags for different datatypes via enum
typedef enum{
    TAG_INT,
    TAG_FLOAT,
    TAG_CHAR
} Tagtypes;

typedef struct{
    Tagtypes tagtype;
    union{
        int i;
        float f;
        char c;
    } data
} Elementype;

typedef struct
{
    Elementype *arr;
    size_t length;
    size_t capacity;
} List;


// create internal function for creating list
List* _internal_create();

void append(List *lst, Elementype element);

void printList(List *lst);

void freeList(List *lis);


// python/Js like list creation
#define list(name) List* name = _internal_create();


#endif

