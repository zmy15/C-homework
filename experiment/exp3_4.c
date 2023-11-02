#include<stdio.h>
#include<math.h>

int main()
{
    int x,b;
    printf("请输入正整数x：");
    scanf_s("%d", &x);
    if (x == 1)
    {
        printf("%d不是质数", x);
    }
    else
    {
        for (b = 2; b <= (int)sqrt(x); b++)
        {
            if (x % b == 0)
                break;
        }
        if (b > (int)sqrt(x))
        {
            printf("%d是质数", x);
        }
        else
        {
            printf("%d不是质数", x);
        }
    }
    return 0;
}