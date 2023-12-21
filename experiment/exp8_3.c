#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};
typedef struct Date Date;
int checkDate(Date date);
int main()
{
	Date date;
	printf("请输入日期YYYY-MM-DD:\n");
	scanf("%d%d%d", &date.year, &date.month, &date.day);
	while (!checkDate(date))
	{
		printf("日期格式不正确，请重新输入\n");
		scanf("%d%d%d", &date.year, &date.month, &date.day);
	}
	printf("pass");
	return 0;
}

int checkDate(Date date)
{
	int days[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
	if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
	{
		days[1] = 29;
	}
	else
	{
		days[1] = 28;
	}
	if (date.month >= 1 && date.month <= 12)
	{
		if (date.day >= 1 && date.day <= days[date.month - 1])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}