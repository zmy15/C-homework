#include<stdio.h>
#include<math.h>

int main()
{
    int count=1, a, b;
    for (a = 100; a <= 999; a++)
    {
        for (b = 2; b <= (int)sqrt(a); b++)
        {
            if (a % b == 0)
                break;
        }
        if (b > (int)sqrt(a))
        {
            printf("%4d", a);
            count++;
            if (count > 8) 
            {
                printf("\n");
                count = 1;
            }
        }
    }
    return 0;
}