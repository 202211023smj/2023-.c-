#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	
	printf("%d의 약수\n", num);
	
	for(int i=1;i<=num;i++){
		if(num%i==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}