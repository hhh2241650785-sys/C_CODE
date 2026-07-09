#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "welcome to bit!!!!";
//	/*int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	while (i <= (sz-1)/2)
//	{
//		system("cls");
//		printf("%s\n", arr1);
//		arr1[i] = arr2[i];
//		arr1[sz - 2 - i] = arr2[sz - 2 - i];
//		i++;
//		Sleep(1000);
//		
//	}*/
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr1);
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	int i = 0;
//	while (i < 3)
//	{
//		printf("请输入你的密码：");
//		scanf("%s", input);
//		if (strcmp("abcdef",input) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		printf("密码错误\n");
//		Sleep(1000);
//		system("cls");
//		i++;
//	}
//	if (3 == i)
//	{
//		printf("输出3次密码均失败，退出程序\n");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//	printf("请做出你的选择:");
//}
//
//void game()
//{
//	int n = rand() % 100 + 1;
//	int in = 0;
//	while (1)
//	{
//		printf("请输入你猜的数:");
//		scanf("%d", &in);
//		if (in > n)
//		{
//			printf("猜大了\n");
//		}
//		else if (in < n)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	//菜单
//	do
//	{
//		menu();
//		scanf("%d", &i);
//		switch (i) 
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("退出程序\n");
//			break;
//		}
//		default:
//		{
//			printf("请输入正确的选择：\n");
//			break;
//		}
//		}
//	} while (i);
//	//猜数字
//		return 0;
//	} 

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello world!";
//	strcpy(arr1,arr2);
//	printf(" %s\n", arr1);
//	printf(" %s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "Hello word!";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//int Max(int a, int b)
//{
//	/*if (a > b)
//		return a;
//	else
//		return b;*/
//	return (a > b ? a : b);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int ret = Max(num1, num2);
//	printf("最大值是:%d\n", ret);
//	return 0;
//}

//void change(int* a, int* b)
//{
//	 /*int arr[2] = { 0 };
//	arr[0] = a;
//	arr[1] = b;
//	printf("x=%d,y=%d\n", arr[1], arr[0]);*/
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	change(&x, &y);
//	printf("x=%d,y=%d\n", x, y);
//
//	return 0;
//}