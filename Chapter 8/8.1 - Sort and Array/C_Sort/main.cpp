#include <stdlib.h>
#include <stdio.h>
#include "compare.h"

int main() {
	int iarr[10] = { 9, 83, 199, 1, 645, -7645, 4, 23, 543, 9 };
	int j = 0;

	for (; j < 10; j++)
		printf("element %d of iarr is: %d\n", j, iarr[j]);

	qsort(
		iarr,
		sizeof(iarr) / sizeof(iarr[0]),
		sizeof(int),
		compare
	);
	
	for (; j < 10; j++)
		printf("element %d of iarr is: %d\n", j, iarr[j]);
}