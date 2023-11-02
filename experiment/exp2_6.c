#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c ,t ,max , min, mid;
	printf("请输入3个正数:");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("输入错误\n");
	}
	else
	{
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		if (a < c)
		{
			t = a;
			a = c;
			c = t;
		}
		if (b < c)
		{
			t = b;
			b = c;
			c = t;
		}
		max = a;
		mid = b;
		min = c;
		if (mid + min > max)
		{
			if (max - mid < 1e-3 || mid - min < 1e-3 || max - min < 1e-3)
			{
				if (max - mid < 1e-3 && mid - min < 1e-3 && max - min < 1e-3)
				{
					printf("三角形为等边三角形\n");
				}
				else if (fabs(pow(mid, 2.0) + pow(min, 2.0) - pow(max, 2.0)) < 1e-2)
				{
					printf("三角形为等腰直角三角形\n");
				}
				else
				{
					printf("三角形为等腰三角形\n");
				}
			}
			else if (fabs(pow(mid, 2.0) + pow(min, 2.0) - pow(max, 2.0)) < 1e-3)
			{
				printf("三角形为直角三角形\n");
			}
			else
			{
				printf("三角形为普通三角形\n");
			}
		}
		else
		{
			printf("不能构成三角形\n");
		}

	}
	return 0;
}