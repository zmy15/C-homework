#include<stdio.h>

int maxnum(int a[]);
int minnum(int a[]);
void delArray(int a[], int x);
int main()
{
	int i, n, max, min, sum = 0;
	static int j = 2;
	double ave;
	int array[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &array[i]);
	}
	max = maxnum(array);
	delArray(array, maxnum(array));
	min = minnum(array);
	delArray(array, minnum(array));
	for (j ; max == maxnum(array); j++)
	{
		delArray(array, maxnum(array));
	}
	for (j ; min == minnum(array); j++)
	{
		delArray(array, minnum(array));
	}
	for (i = 0; i < 10-j; i++)
	{
		sum += array[i];
	}
	ave = sum / ((10-j)*1.0);
	printf("%lf\n", ave);
	return 0;
}

int maxnum(int a[])
{
	int i = 0, max;
	max = a[i];
	for (i; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int minnum(int a[])
{
	int i = 0, min;
	min = a[i];
	for (i; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

void delArray(int a[], int x)
{
	int i, j;
	for (i = 0; i < 10 && a[i] != x; i++);
	for (j = i; j < 9; j++)
	{
		a[j] = a[j + 1];
	}
}