#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void print2(int*(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i]+j));
			printf("%d ", *(*(p+i)+ j));
			printf("%d ", *(*(p + i) [j]));

		}
	}

}
int main()
{
	const char *p = "abcdef";//�����ַ������ܸ�
	const char *p1 = "abcdef";
	if (p == p1)//�����ӡ����hehe ��Ϊ�����ǳ����ַ����Ĳ��� �ɴ����ͬһ��ռ䣬p p1�����������ı���������ͬ���ĵ�ַ
	{
		printf("hehe\n");
	}
	else
	{printf("haha\n");
	
	}
	char arr[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr== arr2)//�����ӡ����haha �����ڴ濪��������ռ� ��Ҳ�������Ĳ��ǳ����ַ���
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");

	}
	printf("%p\n",p);
	printf("%p\n", p1);
	printf("%p\n", arr);
	printf("%p\n", arr2);
	//ָ������
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5 ,6};
	int* parr[] = { arr1, arr2 };
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));

		}printf("\n");
	}
	//����ָ��
	int(*p)[4] = &arr1;
	char *arr[5];
	char *(*pa)[5] = &arr;//char *ȡ���������char *  
	//char *��ʾpaָ��������Ԫ��������char* *pa ǰ���*��ʾpa��ָ�� pa�Ǳ������� ��5����ʾpaָ���������5��Ԫ��
	//����ָ���Ӧ�ã���ά����
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 7, 8, 9, 10, 11 } };
	print2(arr, 3, 5);
	int arr2[5];
	int*parr[10];
	int(*parr2)[5];//��һ��ָ�룬��ָ��ָ����һ�����飬������5��Ԫ�أ�ÿ��Ԫ�ص�������int
	int(*parr3[5])[10];//parr3 ��һ�����飬��������5��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������10��Ԫ�أ�ÿ��Ԫ����int

	return 0;
}