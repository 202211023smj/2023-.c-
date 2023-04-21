#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int j, i;

	for (i = 2; i <= 100; i++) {

		for (j = 2; j < i; j++) {

			if (i % j == 0)

			break;
		}
		if (i == j)

		printf("%d ", i);
	}
	return 0;
}