/*��ѭ����䣨while����for��do��while������������⣺*/
#include<stdio.h>
#include<math.h>

int main()
{
	double a=2.0, b=1.0, sum = 0,t;
	int i,n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += pow(-1, i + 1) * (a/b);
		t = a;
		a += b;
		b = t;
	}
	printf("%lf", sum);
	return 0;
}