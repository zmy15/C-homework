#include<stdio.h>
#define size 40

int main()
{
	//定义长度为40的字符数组
	char str_1[size];
	int i,j;
	//输入数组元素
	gets_s(str_1,size);
	for (i = 0; i < size; i++)
	{
		//判断是否为空格
		if (*(str_1 + i) == ' ')
		{
			//处理多个连续空格的情况
			do
			{
				//删除空格
				for (j = i; j < size; j++)
				{
					str_1[j] = str_1[j + 1];
				}
			} 
			while (*(str_1 + i ) == ' ');
		}
	}
	//输出字符串
	puts(str_1);
	return 0;
}