#define _USE_MATH_DEFINES		// math.h의 M_PI(파이값)를 사용하기위함
#include <stdio.h>
#include <math.h>

double sin_degree(double degree);

int main(void) {
	for (double degree = 0; degree <= 180; degree += 10)
		printf("sin(%.0lf˚)=	%lf\n", degree, sin_degree(degree));
	return 0;
}

double sin_degree(double degree) {
	return sin(degree * M_PI / 180);
}