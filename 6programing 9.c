#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	float x, value;

	printf("x의 값을 입력하시오: ");
	scanf("%f", &x);

	if (x <= 0)
		value = x * x - 9 * x + 2;
	else
		value = 7 * x + 2;

	printf("f(x)의 값은 %f\n", value);

	return 0;
}