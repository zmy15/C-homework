/*判断从键盘读入的正整数x是否为质数，并输出判断结果。*/
#include<stdio.h>
#include<math.h>

int main1()
{
    int x,b;
    printf("请输入正整数x：");
    scanf_s("%d", &x);
    for (b = 2; b <= (int)sqrt(x); b++)
    {
        if (x % b == 0)
            break;
    }
    if (b > (int)sqrt(x))
    {
        printf("x是质数");
    }
    else
    {
        printf("x不是质数");
    }
	return 0;
}