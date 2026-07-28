//通讯录相关的实现
#include "contact.h"

//void init_contact(contact* p)
//{
//	assert(p);
//	p->count = 0;
//	memset(p->data, 0,sizeof(p->data));
//}

int  init_contact(contact* p)
{
	assert(p);
	p->count = 0;
	p->capacity = default_sz;
	p->data = (peo_info*)calloc(default_sz,sizeof(peo_info));
	if (p->data == NULL)
	{
		printf("init:%s\n", strerror(errno));
		return 1;
	}
	return 0;
}

//void add_contact(contact* p)
//{
//	assert(p);
//	if (p->count == Max)
//	{
//		printf("放不下了\n");
//		return;
//	}
//	else
//	{
//		int input = 0;
//		do
//		{
//			printf("请输入名字：");
//			scanf("%s", p->data[p->count].name);
//			printf("请输入年龄：");
//			scanf("%d", &(p->data[p->count].age));
//			printf("请输入性别：");
//			scanf("%s", p->data[p->count].sex);
//			printf("请输入电话：");
//			scanf("%s", p->data[p->count].tele);
//			printf("请输入住址：");
//			scanf("%s", p->data[p->count].addr);
//
//			p->count++;
//			printf("增加成功\n");
//			printf("是否继续添加：1.继续 0.退出\n");
//			scanf("%d", &input);
//		} while (input);
//	}
//}

void check_capacity(contact* p)
{
	if (p->count == p->capacity)
	{
		peo_info* ptr = (peo_info*)realloc(p->data, p->capacity + add_sz * sizeof(peo_info));
		if (ptr == NULL)
		{
			printf("add:%s\n", strerror(errno));
			return;
		}
		p->data = ptr;
		p->capacity += add_sz;
		printf("增容成功\n");
	}
}

void add_contact(contact* p)
{
	assert(p);
	check_capacity(p);
			printf("请输入名字：");
			scanf("%s", p->data[p->count].name);
			printf("请输入年龄：");
			scanf("%d", &(p->data[p->count].age));
			printf("请输入性别：");
			scanf("%s", p->data[p->count].sex);
			printf("请输入电话：");
			scanf("%s", p->data[p->count].tele);
			printf("请输入住址：");
			scanf("%s", p->data[p->count].addr);

			p->count++;	
}

void show_contact(const contact* p)
{
	assert(p);
	if (p->count == 0)
	{
		printf("无联系人\n");
		return;
	}
	
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		printf("姓名：%s\n", p->data[i].name);
		printf("年龄：%d\n", p->data[i].age);
		printf("性别：%s\n", p->data[i].sex);
		printf("电话：%s\n", p->data[i].tele);
		printf("住址：%s\n", p->data[i].addr);
		printf("\n");
	}
}

void del_contact(contact* p)
{
	char name[max_name] = { 0 };
	assert(p);
	if (p->count == 0)
	{
		printf("通讯录为空，不可删除\n");
		return;
	}
	printf("请输入要删除人的名字：");
	scanf("%s",name);
	int ret = find_name(name,p);
	if (ret == -1)
	{
		printf("要删除人不存在\n");
		return;
	}
	for (; ret < p->count-1; ret++)
	{
		p->data[ret] = p->data[ret + 1];
	}
	p->count--;
	printf("删除成功\n");
}

int find_name(char* name, contact* p)
{
	assert(name && p);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		int ret = strcmp(name, p->data[i].name);
		if (ret == 0)
		{
			return i;
		}
	}
	return -1;
}

void search_contact(contact* p)
{
	char name[max_name] = { 0 };
	assert(p);
	if (p->count == 0)
	{
		printf("通讯录为空，不可查找\n");
		return;
	}
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	int ret = find_name(name, p);
	if (ret == -1)
	{
		printf("要查找人不存在\n");
		return;
	}
	printf("姓名：%s\n", p->data[ret].name);
	printf("年龄：%d\n", p->data[ret].age);
	printf("性别：%s\n", p->data[ret].sex);
	printf("电话：%s\n", p->data[ret].tele);
	printf("住址：%s\n", p->data[ret].addr);
	printf("\n");
}

void mod_contact(contact* p)
{
	char name[max_name] = { 0 };
	assert(p);
	if (p->count == 0)
	{
		printf("通讯录为空，不可修改\n");
		return;
	}
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	int ret = find_name(name, p);
	if (ret == -1)
	{
		printf("要修改人不存在\n");
		return;
	}
	printf("请输入名字：");
	scanf("%s", p->data[ret].name);
	printf("请输入年龄：");
	scanf("%d", &(p->data[ret].age));
	printf("请输入性别：");
	scanf("%s", p->data[ret].sex);
	printf("请输入电话：");
	scanf("%s", p->data[ret].tele);
	printf("请输入住址：");
	scanf("%s", p->data[ret].addr);
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((peo_info*)e1)->name, ((peo_info*)e2)->name);
}

void sort_contact(contact* p)
{
	assert(p);
	qsort(p->data, p->count, sizeof(peo_info), cmp);
	printf("排序成功\n");
}

void dis_contact(contact* p);
{
	assert(p);
	free(p->data);
	p->data= NULL;
}

