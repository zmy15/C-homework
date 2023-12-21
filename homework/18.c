#include<stdio.h>
#include<string.h>

int main()
{
	char str[40];
	int i=0,n;
	gets_s(str, 40);
	n=strlen(str);
	for (i; i < n; i++)
	{
		if ((str[i] >= 48 && str[i] <= 57))
		{
			printf("%c", str[i]);
		}
		else
			continue;
	}
	return 0;
}