#include<stdio.h>
#include<math.h>

int Judge(int m, int n);
int main()
{
	int a, b, c, num, sum, r, i;
	int input[100][3];
	scanf_s("%d", &num);
	i = num - 1 ;
	while (num > 0 && num < 100)
	{
		scanf_s("%1d%4d%4d", &a, &b, &c);

		input[num - 1][0] = a;
		input[num - 1][1] = b;
		input[num - 1][2] = c;
		num--;
	}
	for (i; i >= 0; i--)
	{
		sum = Judge(input[i][1], input[i][2]);
		r = sum % 6;
		if (input[i][0] == r)
		{
			switch (r)
			{
			case 0:
				printf("shaolin %d\n", sum);
				break;
			case 1:
				printf("wudang %d\n", sum);
				break;
			case 2:
				printf("kunlun %d\n", sum);
				break;
			case 3:
				printf("emei %d\n", sum);
				break;
			case 4:
				printf("huashan %d\n", sum);
				break;
			case 5:
				printf("kongtong %d\n", sum);
				break;
			default:
				printf("Fighting!\n");
				break;
			}
		}
		else
		{
			printf("Fighting!\n");
		}
	}
	return 0;
}

int Judge(int m,int n)
{
	int prime[1229];
	int c, t, count = 0;
	int sum = 0;
	if (m > n)
	{
		t = n;
		n = m;
		m = t;
	}
    for (m; m <= n; m++)
    {
        for (c = 2; c <= (int)sqrt(m); c++)
        {
            if (m % c == 0)
                break;
        }
        if (c > (int)sqrt(m))
        {
			prime[count] = m;
			count++;
        }
    }
	count--;
	for (count; count >= 0; count--)
	{
		sum += prime[count] / 1000;
		sum += (prime[count] % 1000) / 100;
		sum += ((prime[count] % 1000) % 100) / 10;
		sum += (((prime[count] % 1000) % 100) % 10) / 1;
	}
	return sum;
}