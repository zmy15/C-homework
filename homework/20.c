#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int n, i;
	struct students
	{
		int ID;
		char name[10];
		int math;
		int physics;
		int english;
	};
	typedef struct students students;
	scanf("%d", &n);
	students student[10];
	for (i = 0; i < n; i++)
	{
		scanf("%d%s%d%d%d", &student[i].ID, student[i].name, &student[i].math, &student[i].physics, &student[i].english);
	}
	for (i = 0; i < n; i++)
	{
		printf("The average score of the %dth student is %d.\n", i + 1, (student[i].math + student[i].physics + student[i].english) / 3);
	}
	return 0;
}