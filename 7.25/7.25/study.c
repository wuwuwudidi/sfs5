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
	const char *p = "abcdef";//常量字符串不能改
	const char *p1 = "abcdef";
	if (p == p1)//这里打印的是hehe 因为后面是常量字符串改不了 干脆放在同一块空间，p p1是两个独立的变量，都存同样的地址
	{
		printf("hehe\n");
	}
	else
	{printf("haha\n");
	
	}
	char arr[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr== arr2)//这里打印的是haha ，在内存开辟了两块空间 ，也表面后面的不是常量字符串
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
	//指针数组
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
	//数组指针
	int(*p)[4] = &arr1;
	char *arr[5];
	char *(*pa)[5] = &arr;//char *取决于上面的char *  
	//char *表示pa指向的数组的元素类型是char* *pa 前面的*表示pa是指针 pa是变量名字 【5】表示pa指向的数组是5个元素
	//数组指针的应用，二维数组
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 7, 8, 9, 10, 11 } };
	print2(arr, 3, 5);
	int arr2[5];
	int*parr[10];
	int(*parr2)[5];//是一个指针，该指针指向了一个数组，数组有5个元素，每个元素的类型是int
	int(*parr3[5])[10];//parr3 是一个数组，该数组有5个元素，每个元素是一个数组指针，该数组指针指向的数组有10个元素，每个元素是int

	return 0;
}