#include <stdlib.h>
#include <stdio.h>
#include <search.h>
#include "compare.h"

void main()
{
    /* define an array of pointers to char and initialize it */
    char *sarr[] = {"Kernighan", "Ritchie", "Koenig", "Stroustrup"};
    char *pkey = "Stroustrup";
    char *pkey2 = "Stepanov";
    void *p = NULL;
    unsigned int num = 4; /* number of array elements */

    printf("\nlooking for %s...\n", pkey);

    p = _lfind(
        &pkey,          /* address of key */
        sarr,           /* address of array's beginning */
        &num,           /* number of elements in array */
        sizeof(char *), /* sizeof each element */
        compare         /* pointer to user-defined function */
    );

    if (p)
        printf("%s was found!\n", *(const char **)p);
    else
        printf("requested item was NOT found\n");

    printf("\nlooking for %s...\n", pkey2);

    p = _lfind(
        &pkey2,         /* address of key */
        sarr,           /* address of array's beginning */
        &num,           /* number of elements in array */
        sizeof(char *), /* sizeof each element */
        compare         /* pointer to user-defined function */
    );

    if (p)
        printf("%s was found!\n", *(const char **)p);
    else
        printf("requested item was NOT found\n");
}