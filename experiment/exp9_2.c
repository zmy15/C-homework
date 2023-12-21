#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
typedef struct Student Student;
FILE* CreateFile(FILE* fp, Student *Students)
{
	fp = fopen("D:\\Info.dat", "wb");
	fwrite(Students, sizeof(Student), 4, fp);
	return fclose(fp);
}
void Sort(int n, Student* Students)
{
	int i, j;
	Student Student_t;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (Students[i].score < Students[j].score)
			{
				
				/*Student_t.score= Students[i].score;
				Student_t.age = Students[i].age;
				strcpy(Student_t.ID, Students[i].ID);
				strcpy(Student_t.name, Students[i].name);
				Students[i].score = Students[j].score;
				Students[i].age = Students[j].age;
				strcpy(Students[i].ID, Students[j].ID);
				strcpy(Students[i].name, Students[j].name);
				Students[j].score = Student_t.score;
				Students[j].age = Student_t.age;
				strcpy(Students[j].ID, Student_t.ID);
				strcpy(Students[j].name, Student_t.name);*/
				Student_t = *(Students + i);
				*(Students + j) = *(Students + i);
				*(Students + j) = Student_t;
			}
		}
	}
}
FILE* ReadOut(int n , Student *Students,FILE* fp)
{
	int i;
	fp = fopen("D:\\Info.dat", "rb");
	for (i = 0; i < n; i++)
	{
		fread(Students + i, sizeof(Student), 4, fp);
		printf("%s %s %d %.2f\n", (Students + i)->ID, (Students + i)->name, (Students + i)->age, (Students + i)->score);
	}
	return fp;
}
int main()
{
	FILE* fp = NULL;
	int n, i;
	Student Students[40];
	printf("请输入学生人数:\n");
	scanf("%d", &n);
	printf("请输入学生信息:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%s%s %d%lf", Students[i].ID, Students[i].name, &Students[i].age, &Students[i].score);
	}
	Sort(n, Students);
	fp = CreateFile(fp, Students);
	printf("排序输出结果为：\n");
	fclose(ReadOut(n, Students, fp));
	return 0;
}