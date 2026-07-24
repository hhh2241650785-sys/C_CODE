#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//size_t my_strlen(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr != 0)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu", len);
//	return 0;
//}

//char* my_strcpy(char* arr2, const char* arr1)
//{
//	char* p = arr2;
//	assert(arr2&&arr1);
//	while (*arr1 != 0)
//	{
//		*arr2 = *arr1;
//		arr1++;
//		arr2++;
//	}
//	*arr2 = *arr1;
//	return p;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//char* my_strcat(char* dest,const char* src)
//{
//	assert(src && dest);
//	char* p = dest;
//	while (*src != 0)
//	{
//		if (*dest ==  0)
//		{
//			*dest = *src++;
//		}
//		dest++;
//	}
//	return p;
//
//}
//
//int main()
//{
//	char arr[20] = "Hello ";
//	my_strcat(arr, "world!");
//	printf("%s", arr);
//	return 0;
//}

//int my_strcmp(const char* arr,const char* arr2)
//{
//	assert(arr && arr2);
//	while (*arr == *arr2)
//	{
//		if (*arr == 0 && *arr2 == 0)
//		{
//			return 0;
//		}
//		arr++;
//		arr2++;
//	}
//	/*if (*arr > *arr2)
//		return 1;
//	else
//		return -1;*/
//	return (*arr - *arr2);
//}
//
//
//int main()
//{
//	char arr[] = "abqz";
//	char arr2[] = "abqza";
//	printf("%d\n", my_strcmp(arr, arr2));
//	return 0;
//}

const char* my_strstr(const char* str1, const char* str2)
{
	
	const char* m = str2;
	while (*str1 != 0)
	{
		str2 = m;
		if (*str1 == *str2)
		{
			const char* p = str1;
			 while(*str2 != 0)
			{
				 if (*str1 != *str2)
				 {
					 break;
				 }
				 else 
				 {
					 str1++;
					 str2++;
				 }
			}
			 if (*str2 == 0)
			 {
				 return p;
			 }
			 str1 = p + 1;

		}
		else
		str1++;
	}
	return NULL;
}

int main()
{
	char arr[] ="bcbcd";
	char arr2[] = "bcd";
	const char* ret = my_strstr(arr, arr2);
	if (ret == 0)
	{
		printf("²»´æÔÚ\n");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}