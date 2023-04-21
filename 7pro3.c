#define _CRT _SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		if(n%1==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}