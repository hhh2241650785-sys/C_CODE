#pragma once
//通讯录相关的声明
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#define Max 100
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30
#define default_sz 3
#define add_sz 2

typedef struct peo_info
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}peo_info;

//typedef struct contact
//{
//	peo_info data[Max];
//	int count;
//}contact;

typedef struct contact
{
	peo_info* data;
	int count;
	int capacity;
}contact;

int init_contact(contact* p);

void add_contact(contact* p);

void show_contact(const contact* p);

void del_contact(contact* p);

void search_contact(contact* p);

void mod_contact(contact* p);

void sort_contact(contact* p);

void dis_contact(contact* p);




