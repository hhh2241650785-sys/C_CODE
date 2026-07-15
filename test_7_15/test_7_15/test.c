#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else if ( n == 2)
//		return 2;
//	else
//		return fun(n - 1) + fun(n - 2);
//}

//int fun(int n)
//{
//	int a = 1, b = 2;
//	int i = 0;
//	int ret = 0;
//	if (n == 1)
//		return a;
//	else if (n == 2)
//		return b;
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			ret = a + b;
//			a = b;
//			b = ret;
//		}
//		return ret;
//	}
//		
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf(" % d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int i = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != m)
//			printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr[n - 1] - arr[0]);
//	return 0;
//}

//int main()
//{
//	char input = 0;
//	while (scanf("%c", &input)==1)
//	{
//		if (input >= 'a' && input <= 'z')
//		{
//			printf("%c\n", input - 32);
//		}
//		if (input >= 'A' && input <= 'Z')
//		{
//			printf("%c\n", input + 32);
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		/*int a = (i / 10000) * (i % 10000);
//		int b = (i / 1000) * (i % 1000);
//		int c = (i / 100) * (i % 100);
//		int d = (i / 10) *( i % 10);
//		int sum = a + b + c + d;*/
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			 k *= 10;
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}