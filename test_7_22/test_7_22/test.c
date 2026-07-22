#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}
int main()
{
	int (*arr[4])(int, int) = { add,sub,mul,div };
	int (*(*p)[4])(int, int) = &arr;
	return 0;
}