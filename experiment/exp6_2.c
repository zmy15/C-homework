#include<stdio.h>


void swap3(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int x = 1, y = 2;
	swap3(&x, &y);   /*�˴����λ�������3�ֵ��ý��й۲죬������벻��*/
	printf("x=%d,y=%d\n", x, y);
	return 0;
}