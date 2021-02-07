/*************************************************************************
	> File Name: day06-mysqrt.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Oct 2020 08:19:39 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

double func( double x ) {
	return x * x;
}

double binary_search(double (*arr)(double), double value) {
	double head = 0, tail = value, mid;
	if (value < 1.0) tail = 1.0;
#define EPSL 1e-7
	while (tail - head > EPSL) {
		mid = (head + tail) / 2.0;
		if (arr(mid) < value) head = mid;
		else tail = mid;
	}
#undef EPSL
	return tail;
}

double my_sqrt(double value) {
	return binary_search(func, value);
}

int main() {
	double value;
	while( ~scanf("%lf", &value) ){
		printf("sqrt(%lf) = %lf\n", value, sqrt(value));
		printf("my_sqrt(%lf) = %lf\n", value, my_sqrt(value));
	}

	return 0;
}
