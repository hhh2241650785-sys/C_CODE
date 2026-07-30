#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int m = 0;
//	
//	
//	while (scanf("%d%d", &n, &m) == 2)
//	{
//		int x = n;
//		int y = m;
//		while (m % n != 0)
//		{
//			int temp = m % n;
//			m = n;
//			n = temp;
//		}
//		int ret = n;
//		int i = x * y / n;
//		printf("%d\n", i + ret);
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n)
			{
				printf("* ");
			}
			else if (j == 1 || j == n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}