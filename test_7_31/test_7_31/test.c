#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	/*char i = 0;
//	for (i = 'a'; i <= 'z'; i++)*/
//	//int ch = 0;
//	//while((ch = fgetc(pf))!=EOF)
//	//{
//	//	//fputc(i, pf);
//	//	printf("%c ", ch);
//	//}
//	/*fputs("hello worl\n",pf);
//	fputs("hello worl\n",pf);*/
//	char arr[20];
//	fgets(arr,12,pf);
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct s
{
	char arr[10];
	int age;
	float score;
};

//int main()
//{
//	struct s s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f\n", s.arr, s.age, s.score);
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct s s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	fprintf(stdout,"%s %d %f\n", s.arr, s.age, s.score);  
//
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct s s = {0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s, sizeof(struct s), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct s s = { "zhangsan",25,50.5f };
	struct s tmp = { 0 };
	char i[100] = { 0 };
	sprintf(i, "%s %d %f",s.arr,s.age,s.score);
	printf("%s\n", i);
	sscanf(i, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("%s%d%f",tmp.arr,tmp.age,tmp.score);
	return 0;
}