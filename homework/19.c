#include<stdio.h>
#define DAYS_FEB(year) (year%4==0)&&(year%100!=0)

int main()
{
	int year;
	scanf_s("%d", &year);
	if (DAYS_FEB(year))
	{
		printf("days of the FEB.: 29\n");
	}
	else
	{
		printf("days of the FEB.: 28\n");
	}
	return 0;
}