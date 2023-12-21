#include<stdio.h>

char str_1[] = { "学习" };
char str_2[] = { "作业" };
char str_3[] = { "上班" };
char str_4[] = { "工作" };
char str_5[] = { "原神，启动！" };
int main()
{
	char *my_day = (str_1, str_2, str_3, str_4, str_5);
	printf("我的一天：%s\n", my_day);
	return 0;
}