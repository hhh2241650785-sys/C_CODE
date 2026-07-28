#include "contact.h"
//int is_arr(int arr[50],int n)
//{
//	int i = 0;
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			for (i = 0; i < n - 1; i++)
//			{
//				if (arr[i] > arr[i + 1])
//					return 0;
//			}
//			return 1;
//		}
//		else
//		{
//			for (i = 0; i < n - 1; i++)
//			{
//				if (arr[i] < arr[i + 1])
//					return 0;
//			}
//			return 1;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = is_arr(arr,n);
//	if (ret)
//	{
//		printf("是有序序列\n");
//	}
//	else
//	{
//		printf("不是有序序列\n");
//	}
//	return 0;
//}

//struct node
//{
//	int data;
//	struct node* next;
//};

void menu()
{
	printf("***************************\n");
	printf("****  1.add    2.del    ***\n");
	printf("****  3.search 4.modify ***\n");
	printf("****  5,show   6.sort   ***\n");
	printf("****  0.exit            ***\n");
	printf("***************************\n");
}

int main()
{
	int input = 0;
	contact con ;
	init_contact(&con);
	do
	{
		menu();
		printf("请进行选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&con);
			break;
		case 2:
			del_contact(&con);
			break;
		case 3:
			search_contact(&con);
			break;
		case 4:
			mod_contact(&con);
			break;
		case 5:
			show_contact(&con);
			break;
		case 6:
			sort_contact(&con);
			break;
		case 0:
			dis_contact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}