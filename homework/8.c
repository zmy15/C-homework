#include<stdio.h>

char str_1[] = { "ѧϰ" };
char str_2[] = { "��ҵ" };
char str_3[] = { "�ϰ�" };
char str_4[] = { "����" };
char str_5[] = { "ԭ��������" };
int main()
{
	char *my_day = (str_1, str_2, str_3, str_4, str_5);
	printf("�ҵ�һ�죺%s\n", my_day);
	return 0;
}