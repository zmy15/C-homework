/*����3��double�ͱ���a,b,c��ֵ����if����ж������ܷ񹹳������Σ�
����ܹ������������ǹ��ɵĺ���������
���ȱ������Ρ����������Ρ�ֱ�������Ρ�����ֱ�������Ρ�һ�������Σ���
�������������жϵĽ����
���ȶ�a,b,c������С�����������Լ򻯴��룩*/
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c ,t ,max , min, mid;
	printf("������3������:");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("�������\n");
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
					printf("������Ϊ�ȱ�������\n");
				}
				else if (fabs(pow(mid, 2.0) + pow(min, 2.0) - pow(max, 2.0)) < 1e-2)
				{
					printf("������Ϊ����ֱ��������\n");
				}
				else
				{
					printf("������Ϊ����������\n");
				}
			}
			else if (fabs(pow(mid, 2.0) + pow(min, 2.0) - pow(max, 2.0)) < 1e-3)
			{
				printf("������Ϊֱ��������\n");
			}
			else
			{
				printf("������Ϊ��ͨ������\n");
			}
		}
		else
		{
			printf("���ܹ���������\n");
		}

	}
	return 0;
}