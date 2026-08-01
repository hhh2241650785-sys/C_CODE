#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//#define add(x,y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", add(1, 2));
//	return 0;
//}

#define OFFSETOF(type,name) ((size_t)&(((type*)0)->name))

struct s
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct s s = { 0 };
	printf("%zu\n", OFFSETOF(struct s, c1));
	printf("%zu\n", OFFSETOF(struct s, i));
	printf("%zu\n", OFFSETOF(struct s, c2));
	
	return 0;
}