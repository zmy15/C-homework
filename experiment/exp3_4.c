/*�жϴӼ��̶����������x�Ƿ�Ϊ������������жϽ����*/
#include<stdio.h>
#include<math.h>

int main1()
{
    int x,b;
    printf("������������x��");
    scanf_s("%d", &x);
    for (b = 2; b <= (int)sqrt(x); b++)
    {
        if (x % b == 0)
            break;
    }
    if (b > (int)sqrt(x))
    {
        printf("x������");
    }
    else
    {
        printf("x��������");
    }
	return 0;
}