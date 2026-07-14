#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = - 7;
//	int a = i << 1;
//	int b = i >> 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ a ^ b;
//	
//	printf("%d %d",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 2147483647;
//	int b = -5;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32 ; i++)
//	{
//		count += a & 1;
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void get_stu(struct stu* ps)
//{
//	strcpy(ps->name, "hym");
//	ps->age = 20;
//	ps->score = 80.0;
//}
//
//void print_stu(struct stu ps)
//{
//	printf("%s\n%d\n%.1lf\n", (&ps)->name, (&ps)->age, (&ps)->score);
//	/*printf("%s\n%d\n%.1lf\n", ps.name, ps.age, ps.score);*/
//}
//
//int main()
//{
//	struct stu s;
//	get_stu(&s);
//	print_stu(s);
//	return 0;
//}