#include<stdio.h>

int fun(int a, int b, int r[]);
int main()
{
	int a, b, index, i;
	int array[1000] = {0};
	scanf_s("%d%d", &a, &b);
	index = fun(a, b, array);
	for (i = 0; index > i; i++)
	{
		printf("%d", array[i]);
		if (i < index-1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}

int fun(int a, int b, int array[])
{
	int i = 0;
	for (a; a <= b; a++)
	{
		if ((a % 7 == 0 || a % 11 == 0) && (a % 77 != 0))
		{
			array[i] = a;
			i++;
		}
	}
	return i;
}