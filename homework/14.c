#include<stdio.h>

void sort(int* a, int n);
int main()
{
	int array[10];
	int i, n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}
	sort(array, n);
	for (i = 0; i < n; i++)
	{
		printf("%d  ", array[i]);
	}
	printf("\n");
	return 0;
}
void sort(int* a, int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}