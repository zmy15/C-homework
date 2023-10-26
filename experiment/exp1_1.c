/*从键盘输入两个整数a和b，计算并输出他们的和sum、差diference、积product、商quotient和平均值ave（注意ave和商的定义类型）。*/
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