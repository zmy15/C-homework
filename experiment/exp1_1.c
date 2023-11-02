#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int a, b;
	int quotient, ave;
	scanf("%d%d", &a, &b);
	quotient = a / b;
	ave = (a + b) / 2;
	printf("sum=%d\n", a + b);
	printf("diference=%d\n", a - b);
	printf("product=%d\n", a * b);
	printf("quotient=%d\n", quotient);
	printf("ave=%d\n", ave);
	return 0;
}