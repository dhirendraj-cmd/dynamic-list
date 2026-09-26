#include "dynmvector.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

    // python type list: lst=[]
    list(lst);

    Elementype et;
    et.tagtype = TAG_INT;
    et.data.i = 5;;
    append(lst, et);

    et.tagtype = TAG_FLOAT;
    et.data.f = 5.32421;
    append(lst, et);

    et.tagtype = TAG_CHAR;
    et.data.c = 'A';
    append(lst, et);

    et.tagtype = TAG_INT;
    et.data.i = 15;;
    append(lst, et);

    et.tagtype = TAG_FLOAT;
    et.data.f = 35.32421;
    append(lst, et);

    et.tagtype = TAG_CHAR;
    et.data.c = 'B';
    append(lst, et);

    et.tagtype = TAG_INT;
    et.data.i = 981;;
    append(lst, et);

    et.tagtype = TAG_FLOAT;
    et.data.f = 1055.23145656;
    append(lst, et);

    et.tagtype = TAG_CHAR;
    et.data.c = 'C';
    append(lst, et);

    // adding string
    et.tagtype = TAG_STRING;
    et.data.s = strdup("Game is on");
    append(lst, et);

    et.tagtype = TAG_STRING;
    et.data.s = strdup("Learning C through building things");
    append(lst, et);

    et.tagtype = TAG_STRING;
    et.data.s = strdup("Satyanveshi....");
    append(lst, et);

    printf("There are total %zu elements in list, printing all elements from list\n", lst->length);
    printList(lst);
    printf("\n");

    freeList(lst);
    lst=NULL;

    return 0;
}

