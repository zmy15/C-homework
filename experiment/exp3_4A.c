/*找出规定范围（a,b）内的所有质数，并按每行5个的格式输出。
（这里a，b变量从键盘输入并且范围为：10≤a≤b≤1000）*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, count = 1;
	do
	{
		printf("请输入介于10到1000内的一个范围:");
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