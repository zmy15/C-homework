#include<stdio.h>

int days(int months[], int month,int day);
int main()
{
	int year, month, day;
	scanf_s("%d-%d-%d", &year, &month, &day);
	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
	{
		int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		printf("%d\n", days(months, month, day));
	}
	else
	{
		int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		printf("%d\n", days(months, month, day));
	}
	return 0;
}

int days(int months[],int month,int day)
{
	int i, sum = 0;
	for (i = 0; i < month - 1; i++)
	{
		sum += months[i];
	}
	sum += day;
	return sum;
}