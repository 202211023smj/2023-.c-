#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int x, n;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    do {
        n = x % 10;
        x /= 10;
        printf("%d", n);
    } while (x != 0);
    return 0;
}