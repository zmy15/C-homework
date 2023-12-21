#include<stdio.h>
#include<string.h>

int main()
{
	long int n,i=0;
	char s[] = "0123456789ABCDEF";
	char a[10];
	scanf_s("%ld", &n);
	do
	{
		switch (n%16)
		{
		case 10:
			a[i] = s[10];
			break;
		case 11:
			a[i] = s[11];
			break;
		case 12:
			a[i] = s[12];
			break;
		case 13:
			a[i] = s[13];
			break;
		case 14:
			a[i] = s[14];
			break;
		case 15:
			a[i] = s[15];
			break;
		case 16:
			a[i] = s[16];
			break;
		default:
			a[i] = n % 16;
			break;
		}
		i++;
		n = n / 16;
	} while (n != 0);
	i--;
	for (i; i >= 0; i--)
	{
		if (a[i] >= 65 && a[i] <= 70)
			printf("%c", a[i]);
		else
			printf("%d", a[i]);
	}
	return 0;
}