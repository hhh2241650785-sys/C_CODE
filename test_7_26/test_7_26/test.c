#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3)
//					{
//						if(a+b+c+d == 1)
//						printf("%d %d %d %d\n",a,b,c,d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//} 

//
//	scanf("%zu", &num);
//	fun(str, num);
//	printf("%s", str);
//	return 0;
//}

//int main()
//{
//	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 2;
//	while (i>=0&&j>=0&&j<3&&i<char* fun(char* str,size_t num)
//{
//	assert(str);
//	char* p = str;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		char n = str[0];
//		int j = 0;
//		for (j = 0; j <= strlen(str) - 2; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = n;
//	}
//	return p;
//}
//
//int main()
//{
//	size_t num = 0;
//	char str[] = "abcdef";3)
//	{
//		if (n > arr[i][j])
//		{
//			i++;
//		}
//		else if (n < arr[i][j])
//		{
//			j--;
//		}
//		else 
//		{
//			printf("在%d行%d列\n", i+1, j+1);
//			break;
//		}
//	}
//	if (i < 0 || j < 0 || j > 2 || i > 2)
//	{
//		printf("不存在\n");
//	}
//	return 0;
//}

//void fun(char* left,char*right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int is_left_rotate(char* s1, char* s2)
//{
//	int i = 0;
//	for (i = 1; i < strlen(s1); i++)
//	{
//		fun(s1, s1+strlen(s1) - 1);
//		fun(s1, s1 + i - 1);
//		fun(s1 + i, s1+strlen(s1) - 1);
//		if (!strcmp(s1, s2))
//		{
//			return i;
//		}
//		else
//		{
//			fun(s1,s1+ strlen(s1) - 1);
//			fun(s1, s1 + i - 1);
//			fun(s1 + i, s1+strlen(s1) - 1);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defabc";
//	int ret = is_left_rotate(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}