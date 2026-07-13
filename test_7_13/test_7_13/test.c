#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int fun(int i)
//{
//	if (i > 1)
//	{
//		return i * fun(i - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fun(i);
//	printf("%d", ret);
//	return 0;
//}

//int fun(int n)
//{
//	int i = 0;
//	int ret = 1;
//	if (n <= 1)
//	{
//		return ret;
//	}
//	else
//	{
//		for (i = 2; i <= n; i++)
//		{
//			ret *= i;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fun(i);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char i[])
//{
//	if (*i == '\0')
//	{
//		return 0;
//	}
//		return 1 + my_strlen(i + 1);
//}

//int my_strlen(char i[])
//{
//	int count = 0;
//	while (*i)
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char i[20] = { 0 };
//	scanf("%s", i);
//	int ret = my_strlen(i);
//	printf("%d", ret);
//	return 0;
//}

//void reverse_string(char* arr ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1 - 1 - i; i++)
//	{
//		char temp = 0;
//		temp = arr[i];
//		arr[i] = arr[sz - 1 - 1 - i];
//		arr[sz - 1 - 1 - i] = temp;
//
//	}
//}

//void reverse_string(char* arr,int sz)
//{
//	char tmp = 0;
//    tmp = *arr;
//	*arr = *(arr + sz - 2);
//	*(arr + sz - 2) = '\0';
//	if ((sz - 3) >= 2)
//	{
//		reverse_string(arr + 1, sz - 2);
//	}
//	*(arr + sz - 2) = tmp;
//
//
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]); 
//	reverse_string(arr,sz);
//	printf("%s", arr);
//	return 0;
//}

//void reverse_string(char* arr)
//{
//	char tmp = 0;
//	int len = strlen(arr);
//	tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//
//
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	//int sz = sizeof(arr) / sizeof(arr[0]); 
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int fun(int i)
//{
//	if (i > 9)
//	{
//		return i % 10 + fun(i / 10);
//	}
//	return i;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fun(i);
//	printf("%d", ret);
//	return 0;
//}

//int fun(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * fun(n, k - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int k = 0;
//	int n = 0;
//	scanf("%d %d",&n,&k);
//	int ret = fun(n, k);
//	printf("%d", ret);
//	return 0;
//}

//int fun(int n)
//{
//	int i = 0;
//	int tmp =0;
//	int a = 0;
//	int b = 1;
//	if (n > 1)
//	{
//		for (i = 2; i <= n; i++)
//		{
//			tmp = a + b;
//			a = b;
//			b = tmp;
//		}
//		return tmp;
//	}
//	else if (n == 0)
//	{
//		return 0;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int arr2[10] = {6,7,8,9,10};
//	int sz = sizeof(int[10]) / sizeof(arr[0]);
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int left, int right)
{
	int i = 0;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	print(arr, sz);
	printf("\n");
	reverse(arr, left, right);
	print(arr, sz);
	printf("\n");
	init(arr, sz);
	print(arr, sz);
	return 0;
}