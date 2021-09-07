#include <stdlib.h>
#include <stdio.h>
#include "compare.h"

void main()
{
    /* define an array of pointers to char and initialize it */
    char *sarr[] = {"Kernighan", "Koenig", "Ritchie", "Stroustrup"};
    char *pkey = "Stroustrup";
    char *pkey2 = "Stepanov";
    void *p = NULL;

    printf("\nlooking for %s...\n", pkey);

    p = bsearch(
        &pkey,          /* address of key */
        sarr,           /* address or array's beginning */
        4,              /* number or elements in array */
        sizeof(char *), /* sizeof each element */
        compare         /* comparison function */
    );

    if (p)
        printf("%s was found!\n", *(const char **)p);
    else
        printf("requested item was NOT found\n");

    printf("\nlooking for %s...\n", pkey2);

    p = bsearch(
        &pkey2,
        sarr,
        4,
        sizeof(char *),
        compare);

    if (p)
        printf("%s was found!\n", *(const char **)p);
    else
        printf("requested item was NOT found \n");
}