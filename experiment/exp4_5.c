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
				printf("%d=%d+%d\n", i, a, b);
				break;
			}
		}
	}
	if (count == 999)
	{
		printf("2000���ڵ���ż����������2�����ܹ��ֽ�Ϊ��������֮��");
	}
	else
	{
		printf("2000���ڵ���ż����������2�������ܹ��ֽ�Ϊ��������֮��");
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