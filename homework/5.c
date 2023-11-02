#include<stdio.h>
#include<math.h>

int JudgePrime(int n);
int main()
{
	int i = 3, a, b, count = 0;
	for (i; i <= 2000; i++)
	{
		if (i % 2 != 0)
			continue;
		for (a = 2; a <= i; a++)
		{
			b = i - a;
			if (JudgePrime(a) && JudgePrime(b))
			{
				count++;
				printf("%4d=%4d+%4d", i, a, b);
				if (count <= 3)
				{
					printf(" ");
				}
				break;
			}
		}
		if (count == 4)
		{
			printf("\n");
			count = 0;
		}
	}
	return 0;
}
int JudgePrime(int n)
{
	int c;
	if (n >= 2)
	{
		for (c = 2; c <= (int)sqrt(n); c++)
		{
			if (n % c == 0)
				break;
		}
		if (c > (int)sqrt(n))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}