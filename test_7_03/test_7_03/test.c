#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	printf("要好好学习C语言吗");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("能成为C语言大师");
	}
	else
	{
		printf("碌碌无为");
	}
	return 0;
}

