#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int prime(int a)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(a); j++)
//	{
//		if (a % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//		for (i = 101; i <= 200; i+=2)
//		{
//			if (1 == prime(i))
//			{
//				printf("%d ", i);
//			}
//		}
//	return 0;
//}

//int year1(int a)
//{
//	if ((0 == a % 4 && 0 != a % 100)||(0 == a % 400))
//	{
//		//printf("%d是闰年", a);
//		return 1;
//	}
//	else
//	{
//		//printf("%d不是闰年", a);
//		return 0;
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int year = 0;
//	//scanf("%d", &year);
//	for (year = 1000; year <= 2000; year+=4)
//	{
//		if (1 == year1(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("%d", count);
//	
//
//	return 0;
//}

//int look_for(int n, int arr[], int sz)
//{
//	int right = sz-1;
//	int left = 0;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	scanf("%d", &a);
//	int ret = look_for(a, arr, sz);
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("下标是%d\n", ret);
//	}
//	return 0;
//}

//void ADD(int* pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
	/*printf("%d\n", num);


	return 0;
}*/

//#include "add.h"
//#pragma comment(lib,"add.lib")
// 
//int main()
//{
//	int a = 19;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%u ", x % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a); 
//	/*while (a)
//	{
//		printf("%u ", a % 10);
//		a /= 10;
//	}*/
//	print(a);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}*/
//	if (*str != '\0')
//	{
//		//str++;
//		return my_strlen(str+1) + 1;
//	}
//	else
//		return 0;
//
//
//}

//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("长度是%d个字符", len);
//	return 0;
//}

//int jiechen(int a)
//{
//	if (a > 1)
//		return a * jiechen(a - 1);
//	else
//		return 1;
//}

int fun(int in)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	if (in > 2)
	{
		//return fun(in - 1) + fun(in - 2);
		for (i = 3; i <= in; i++)
		{
			c = a + b;
			a = b;
			b = c;

		}
		return c;
	}
	
	else
	{
		return 1;
	}
}

int main()
{
	int in = 0;
	scanf("%d", &in);
	int ret = fun(in);
	printf("%d", ret);
}