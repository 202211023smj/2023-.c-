#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int age;
	double cm;

	printf("키를 입력하시오(cm): ");
	scanf("%lf", &cm);

	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if (cm >= 140 && age >= 10)
		printf("타도 좋습니다.\n");
	else
		printf("죄송합니다.\n");

	return 0;
}