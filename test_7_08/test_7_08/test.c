#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			/*break;*/
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//} 

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (5 == i)
//		{
//			/*break;*/
//			continue;
//		}
//		printf("%d ", i);
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int arr[] = { 0 };
//	//输入n
//	scanf("%d", &n);
//	//n阶乘公式的实现
//	while (i < n)
//	{
//		arr[i] = i + 1;
//		i++;
//	}
//	int total = 1;
//	i = 0;
//	while (i < n)
//	{
//		total = total * arr[i];
//		i++;
//	}
//	//打印n的阶乘
//	printf("%d\n", total);
//
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int m = 0;
//	scanf("%d", &m);
//	for (j = 1; j <= m; j++)
//	{
//		int total = 1;
//		n = j;
//		for (i = 1; i <= n; i++)
//		{
//			total = total * i;
//		}
//		sum = sum + total;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i=1;i<=10)
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int total = 1;
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		total *= i;
//		sum += total;
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d", &n);
	int right = sz - 1;
	int left = 0;
	int mid = 0;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if ( arr[mid] == n)
		{
			printf("找到了,下表是%d\n",mid);
			break;
		}
		else if (n < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	if (left > right)
		printf("找不到");
	return 0;
}

