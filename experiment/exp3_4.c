#include<stdio.h>
#include<math.h>

int main()
{
    int x,b;
    printf("������������x��");
    scanf_s("%d", &x);
    if (x == 1)
    {
        printf("%d��������", x);
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
            printf("%d������", x);
        }
        else
        {
            printf("%d��������", x);
        }
    }
    return 0;
}