#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>       
#include <string.h>       

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		int t = 2*n;
//		for (i = 1; i <= n+1; i++)
//		{
//			for (j = 0; j < t; j++)
//			{
//				printf(" ");
//			}
//			t -= 2;
//			for (j = 0; j < i; j++)
//			{
//				printf("*");
//			}   
//			printf("\n");
//		}
//		t = 2;
//		for (i = n; i >= 1; i--)
//		{
//			for (j = 0; j < t; j++)
//			{
//				printf(" ");
//			}
//			t += 2;
//			for (j = 0; j < i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[7] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	int total = 0;
//	for (i = 1; i < sz - 1; i++)
//	{
//		total += arr[i];
//	}
//	float ret = total / 5.0f;
//	printf("%.2f\n", ret);
//	return 0;
//}

//find_dog(int sz, int* arr, int* pd1, int* pd2)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			break;
//		}
//	}
//	int n = i;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> n) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,5,5,6,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_dog(sz, arr, &dog1, &dog2);
//	printf("%d,%d\n", dog1, dog2);
//}

//enum status
//{
//	valid,
//	invalid
//}sta = invalid;
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	const char* i = str;
//	int flag = 1;
//	while (isspace(*i))
//	{
//		i++;
//	}
//	if (*i == '+' )
//	{
//		flag = 1;
//		i++;
//	}
//	else if (*i == '-')
//	{
//		flag = -1;
//		i++;
//	}
//	long long ret = 0;
//	while (*i != 0)
//	{
//		if (*i > '0' && *i < '9')
//		{
//			int n = flag*(*i - '0');
//			ret = ret * 10 + n;
//			if (ret > INT_MAX||ret <INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		i++;
//	}
//	if (*i == 0)
//	{
//		sta = valid;
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char arr[] = "  -123a456";
//	int ret = my_atoi(arr);
//	if (sta == invalid)
//	{
//		printf("非法返回\n");
//	}
//	else if (sta == valid)
//	{
//		printf("合法返回\n");
//	}
//	printf("%d\n", ret);
//}

//#define change(n) ((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1)
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = change(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 0;
//	int y = 1;
//	int ret = 0;
//	int total = 0;
//	while (1)
//	{
//		ret = x + y;
//		x = y;
//		y = ret;
//		if (n == ret) 
//		{
//			total = 0;
//			break;
//		}
//		else if (n<x + y && n>ret)
//		{
//			total = (x+y - n) > (n - ret) ? n - ret : x+y - n;
//			break;
//		}
//	}
//	printf("%d\n", total);
//	return 0;
//}

void fun(char* arr,int len)
{
	int count = 0;
	char* str = arr;
	while (*str != 0)
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	str -= 1;
	int j = len + count * 2 - 1;
	int i = 0;
	for (i = 0; i < count; i++)
	{
		while (*str != ' ')
		{
			arr[j--] = *str--;
		}
		arr[j] = '0';
		arr[j-1] = '2';
		arr[j-2] = '%';
		j = j - 3;
		str = str - 1;
	}

}

int main()
{
	char arr[100] = "we are happy ";
	int len = strlen(arr);
	fun(arr,len);
	printf("%s\n", arr);
	return 0;
}