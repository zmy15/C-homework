#include<stdio.h>

int main()
{
	int s, t;
	double money1, money2, sum;
	scanf_s("%d%d", &s, &t);
	if (s > 2)
	{
		if (s > 10)
		{
			money1 = 6 + 8 * 1.8 + (s - 10) * 1.8 * 1.5;
		}
		else
		{
			money1 = 6 + (s - 2) * 1.8;
		}
	}
	else
	{
		 money1 = 6;
	}
	if (t < 3)
	{
		money2 = 0;
	}
	else
	{
		money2 = t /3;
	}
	sum = money1 + money2;
	if (sum - (int)sum == 0)
	{
		printf("%.0f", sum);
	}
	else
	{
		printf("%.1f", sum);
	}
	return 0;
}