#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			if (2 == i && 0 == j)
//			{
//				printf("%d ", arr[i][j]);
//				break;
//			}
//		}
//		//printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int h = sizeof(arr) / sizeof(arr[1]);
//	printf("%d", h);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int temp = 0;
//	int j = 0;
//	int h = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	} 
//	for (h = 0; h < sz; h++)
//	{
//		printf("%d ", arr[h]);
//	}
//	return 0;
//}

void sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = 0;
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 4,8,3,10,6,5,7,1,9,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	
	sort(arr, sz);
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}