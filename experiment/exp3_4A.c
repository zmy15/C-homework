/*�ҳ��涨��Χ��a,b���ڵ���������������ÿ��5���ĸ�ʽ�����
������a��b�����Ӽ������벢�ҷ�ΧΪ��10��a��b��1000��*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, count = 1;
	do
	{
		printf("���������10��1000�ڵ�һ����Χ:");
		scanf_s("%d%d", &a, &b);
	} while (!(a<b&&a>10&&b<1000));
    for (a ; a <= b; a++)
    {
        for (c = 2; c <= (int)sqrt(a); c++)
        {
            if (a % c == 0)
                break;
        }
        if (c > (int)sqrt(a))
        {
            printf("%4d", a);
            count++;
            if (count > 5)
            {
                printf("\n");
                count = 1;
            }
        }
    }
	return 0;
}