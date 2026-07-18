#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	char str[10001] = "abcdefg";
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	char temp = 0;
//	while (left < right)
//	{
//		temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s", str);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int ret = i;
//		int n = 1;
//		int sum = 0;
//		while (ret / 10)
//		{
//			n++;
//			ret /= 10;
//		}
//		ret = i;
//		for(j = 1;j<=n;j++)
//		{
//			sum += pow(ret % 10,n);
//			ret /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 7;i++)
//	{
//		int j = 0;
//		int a = 0;
//		for (a = 0; a < 7-i; a++)
//		{
//			printf("%c", ' ');
//		}
//		for (j = 0; j < i * 2 - 1; j++)
//		{
//			printf("%c", '*');
//		}
//		for (a = 0; a < 7-i; a++)
//		{
//			printf("%c", ' ');
//		}
//		printf("\n");
//	}
//	for (i = 6; i > 0; i--)
//	{
//		int j = 0;
//		int a = 0;
//		for (a = 0; a < 7 - i; a++)
//		{
//			printf("%c", ' ');
//		}
//		for (j = 0; j < i * 2 - 1; j++)
//		{
//			printf("%c", '*');
//		}
//		for (a = 0; a < 7 - i; a++)
//		{
//			printf("%c", ' ');
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}

	printf("%d", total);
	return 0;
}