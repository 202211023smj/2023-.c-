#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand( ) {
	return rand() % 2;
}

int main(void) {
    int computer, user;
    char input;

    srand(time(NULL));
    while (1) {
        computer = b_rand();
        printf("앞면 또는 뒷면(1 또는 0):");
        scanf("%d", &user);

        if (computer == user)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");

        printf("계속하시겠습니까?(y 또는 n):");
        scanf(" %c", &input);

        if (input == 'y')
            continue;
        else
            break;
    }
	return 0;
}