#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0x11223344;
	char* p = (char*)&a;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%0x", *(p + i));
	}
	return 0;
}