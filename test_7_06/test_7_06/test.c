#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a/b, a%b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0 == (num % 2))
//	{
//		printf("不是奇数\n");
//	}
//	else
//		printf("是奇数\n");
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}