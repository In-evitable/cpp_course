#include <stdlib.h>
#include <stdio.h>
#include <search.h>
#include <iostream>

int __cdecl compare(const void *pfirst, const void *psecond)
{
    return (*(const char *)pfirst) - (*(const char *)psecond);
}

void main()
{
    char arr[] = {'a', 'b'};

    char key = 'a';
    char key2 = 'c'; /* false key */
    void *p = NULL;
    unsigned int num = 2;

    printf("looking for %c...\n", key);

    p = _lsearch(
        &key,
        arr,
        &num,
        sizeof(char),
        compare);

    if (p)
        printf("%c was found!\n", *(char *)p);

    printf("\nlooking for %c...\n", key2);

    p = _lsearch(
        &key2,
        arr,
        &num,
        sizeof(char),
        compare);

    printf("%c was appended to arr\n", *(char *)p);
    printf("arr has %d elements \n", num);
    printf("the newly added element is: %c\n", arr[2]);

    std::cin.get();
}