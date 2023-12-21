#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int age;
	int grade;
};
typedef struct student student;
int main()
{
	FILE* fp_in;
	FILE* fp_out;
	char ch;
	int n,i;
	fp_in = fopen("file.in", "r");
	if (fp_in == 0)
	{
		exit(1);
	}
	ch=fgetc(fp_in);
	n = atoi(&ch);
	student students[5];
	for (i = 0; i < n; i++)
	{
		fscanf(fp_in, "%s%d%d", students[i].name, &students[i].age, &students[i].grade);
	}
	for (i = 0; i < n; i++)
	{
		students[i].age += 1;
		students[i].grade = students[i].grade * 1.2;
		if (students[i].grade > 600)
		{
			students[i].grade = 600;
		}
	}
	fp_out = fopen("file.out", "w");
	if (fp_out == 0)
	{
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		fprintf(fp_out, "%s %d %d\n", students[i].name, students[i].age, students[i].grade);
	}
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}