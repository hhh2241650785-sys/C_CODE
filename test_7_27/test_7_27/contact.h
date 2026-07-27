#pragma once
//通讯录相关的声明
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define max 100
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30

typedef struct peo_info
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}peo_info;

typedef struct contact
{
	peo_info data[max];
	int count;
}contact;

void init_contact(contact* p);

void add_contact(contact* p);

void show_contact(const contact* p);

void del_contact(contact* p);
