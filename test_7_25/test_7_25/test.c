#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include<math.h>

//char* my_strstr(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1)
//	{
//		char* s1 = str1;
//		char* s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return str1;
//		}
//		str1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr[] = "bbbcd";
//	char arr2[] = "bcd";
//	char* p = my_strstr(arr, arr2);
//	printf("%s", p);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//	}
//	return p;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr1[20] = { 0 };
//	my_memcpy(arr1, arr, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return p;
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9};
//	my_memmove(arr+2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	while (n )
//	{
//		int ret = n % 10;
//		if (ret % 2 == 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		i++;
//		n /= 10;
//	}
//	int j = i-1;
//	for (i = j; i >=0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		for (; j < n; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}

void judge(double* p, int i)
{
	if (i == 1)
	{
		*p -= 50;
	}
}

int main()
{
	double m = 0.0;
	int mon = 0;
	int day = 0;
	int i = 0;
	double sum = 0.0;
	scanf("%lf%d%d%d", &m, &mon, &day, &i);
	if (mon == 11 && day == 11)
	{
		sum = m * 0.7;
		judge(&sum,i);
	}
	else if (mon == 12 && day == 12)
	{
		sum = m * 0.8;
		judge(&sum, i);
	}
	else
	{
		judge(&sum, i);
	}
	if (sum < 0)
	{
		sum = 0;
	}
	printf("%.2lf\n", sum);
	return 0;
}