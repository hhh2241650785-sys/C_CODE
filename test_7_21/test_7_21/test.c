#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void fun(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fun(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int min = n > m ? m : n;
//	i = 0;
//	while ((j< m)&&(i<n))
//	{
//		if (arr[i] > arr2[j])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//			i++;
//		}
//	}
//	if (j < m)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else 
//	{
//		for (; i < n; i++)
//			printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	char* p = "abceef";
//	*p = 'w';
//	return 0;
// }

//int main()
//{
//	int arr[10];
//	int (*p2)[10] = &arr;
//	//int* p = &arr;
//	return 0;
//}

int main()
{
	char* arr[5] = { 0 };
	char*  (*pc)[5] = &arr;
	return 0;
}