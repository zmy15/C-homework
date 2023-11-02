#include<stdio.h>

void DrawTriangle(int n, char c);
int main()
{
	int a;
	scanf_s("%d", &a);
	DrawTriangle(a, '*');
	//DrawTriangle(10, '#');
	return 0;
}

void DrawTriangle(int n, char c)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}