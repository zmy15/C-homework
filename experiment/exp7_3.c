#include<stdio.h>
#define size 40

int main()
{
	//���峤��Ϊ40���ַ�����
	char str_1[size];
	int i,j;
	//��������Ԫ��
	gets_s(str_1,size);
	for (i = 0; i < size; i++)
	{
		//�ж��Ƿ�Ϊ�ո�
		if (*(str_1 + i) == ' ')
		{
			//�����������ո�����
			do
			{
				//ɾ���ո�
				for (j = i; j < size; j++)
				{
					str_1[j] = str_1[j + 1];
				}
			} 
			while (*(str_1 + i ) == ' ');
		}
	}
	//����ַ���
	puts(str_1);
	return 0;
}