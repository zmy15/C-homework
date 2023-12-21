#include<stdio.h>

int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n,i;
	scanf_s("%d", &n);
	for (i = 10 - n; i < 10; i++)
	{
		printf("%3d", array[i]);
	}
	for (i = 0; i < 10 - n; i++)
	{
		printf("%3d", array[i]);
	}
	return 0;
}