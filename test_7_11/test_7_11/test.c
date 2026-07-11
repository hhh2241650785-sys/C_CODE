#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void fun(int n,char x,char y,char z)
//{
//	if (n > 1)
//	{
//		fun(n - 1, x, z, y);
//		printf("%c-->%c\n", x, z);
//		fun(n - 1, y, x, z);
//	}
//	else if (n == 1)
//	{
//		printf("%c-->%c\n", x, z);
//	}
//	else
//	{
//		printf("请输入有效的数字\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun( n,'a', 'b', 'c');
//	return 0;
//}

//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else if (n <= 0)
//		return 0;
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun( n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int via = 0;
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		via = num1;
//		num1 =num2;
//		num2 = via;
//	}
//	if (num1<num3)
//	{
//		via = num1;
//		num1 = num3;
//		num3 = via;
//	}
//	if(num2<num3)
//	{
//		via = num2;
//		num2 = num3;
//		num3 = via;
//	}
//	printf("%d %d %d", num1, num2, num3);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0; 
//}

//int main()
//{
//	int ret = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = a > b ? b : a; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d", i);
//	 
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	/*int max = a > b ? a : b;
//	int min = a < b ? a : b;*/
//	
//	while ( ret = a % b)
//	{
//		/*int ret = max % min;*/
//		
//		
//		a = b;
//		b = ret;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//} 

//int main()
//{
//	double sum = 0.0;
//	double ret = 0.0;
//	int flag = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i+=1)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,456,7,8,9,10 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}

int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}

