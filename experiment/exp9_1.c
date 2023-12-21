#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp;
	char ch;
	fp = fopen("D:\\f1.txt", "w+");
	if (fp == 0)
	{
		printf("file error!\n");
		exit(1);
	}
	printf("输入内容，以#结束：\n");
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	rewind(fp);
	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}