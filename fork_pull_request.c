#include <stdio.h>

void main()
{
	int i, j;

	for (i = 1; i < 5; i++) {
		for (j = 1; j < 10; j++) {
			printf("\n%d x %d = %d ", i, j, i * j);
		}
	}

	getchar();

}
