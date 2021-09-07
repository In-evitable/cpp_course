#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

void main()
{
    int j = 0;
    srand ( time(NULL) ); // set starting point

    for (; j < 5; j++)
        printf("%d\n", rand());

    std::cin.get();
}
