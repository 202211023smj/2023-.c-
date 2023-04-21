#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k=0;

	for (int x=1;x<=30;x++)    
	{
			k+=x*=+1;
	}

	printf("%d\n", k);
	k=0;

	for (int x=10;x<=30;x++)    
	{
		for (int y=0;y<=5;y++)
		{
			k+=(x+y);
		}
	}
	printf("%d\n", k);
	return 0;
}