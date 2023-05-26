#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int x, i, cnt=0;
    printf ("숫자를 입력하세요 : ");
    scanf ("%d", &x);
 
    for (i=2; i<x; i++) {
            printf ("%d %% %d = %d",x,i,x%i);
            if (x % i == 0)
                cnt++;
    }
    if ( cnt == 0 )
        printf ("소수 입니다.");
    else 
        printf ("소수가 아닙니다.");
    return 0;
 }