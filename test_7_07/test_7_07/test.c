#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;		
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//			;
//		case 2:
//			;
//		case 3:
//			;
//		case 4:
//			;
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//			;
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("error\n");
//			break;
//		}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		i++;
//		if (6 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	/*int ch = getchar();
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	putchar(ch);*/
//
//	/*int ch = 0;
//	while ((  ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;*/
//	int ch = 0;
//	while ((ch = getchar()) !='\n')
//	{
//		;
//	}
//}

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	float c = 0.0f;
//	float m = 0.0f;
//	float e = 0.0f;
//	scanf("%d;%f,%f,%f", &num, &c, &m, &e);
//	printf("The each subject score of No.%d is %.2f,%.2f,%.2f.\n", num, c, m, e);
//	return 0;
//}

//int main()
//{
//	int n = printf("Hello world!");
//		printf("\n");
//	printf("%d", n);
//
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << end!;\n");
//	return 0;
//}

////自建函数
//int Max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}

//int main()
//{
//	//输入
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//		scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
//		int n = Max(num1, num2);
//		int m = Max(num3, num4);
//			printf("%d",Max(n ,m));
//
//
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//			i++;
//	}
//		printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int max = 0;
//	int i = 1;
//	int in = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &in);
//		if (in > max)
//		{
//			max = in;
//		}
//		i++;
//	}
//		printf("%d\n", max);
//	return 0;
//}

int main()
{
	float v = 0.0f;
	float r = 0.0f;
	scanf("%f", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3f\n", v);
	return 0;
}