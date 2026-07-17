#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = a ^ b;
//	/*int ret = 0;
//	scanf("%d", &ret);*/
//	int count = 0;
//	int i = 0;
//	while(ret)
//	{
//		/*if (1 == (ret & 1))
//		{
//			count++;
//		}
//		ret >>= 1;*/
//
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> (i) )& 1));
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> (i)) & 1));
//	}
//}
//
//int main()
//{
//	int in = 0;
//	scanf("%d", &in);
//	print(in);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//int arr[20][20] = { 0 };
//	int i = 0;
//	while (scanf("%d", &n))
//	{
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("%c", '*');
//				}
//				else if (j + i == n - 1)
//				{
//					printf("%c", '*');
//				}
//				else
//				{
//					printf("%c", ' ');
//				}
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}

//int count_day(int year, int mon)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		if (mon = 2)
//			return 29;
//		else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
//			return 30;
//		else
//			return 31;
//	}
//	else
//	{
//		if (mon = 2)
//			return 28;
//		else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
//			return 30;
//		else
//			return 31;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int mon = 0;
//	while(scanf("%d %d", &year, &mon)==2)
//	{
//		int ret = count_day(year, mon);
//		printf("%d\n", ret);
//	}
//	return 0;
 //}
 
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	int sub = 1;
	for (i = 1; i <= n; i++)
	{
		sub *= i;
		sum += sub;
	}
	printf("%d", sum);
	return 0;
}