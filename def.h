#pragma once
#ifndef _DEF_H_
#define _DEF_H_

#define MAXSIZE 10

typedef struct LNode
{
	int data;
	LNode* next;
}*LinkList;//单链表

typedef struct DNode
{
	int data;
	DNode* prior, * next;
}*DLinkList;//双链表

typedef struct
{
	int data;
	int next;
}SLinkList[MAXSIZE];//静态链表

//单链表操作
bool iniLinkList(LinkList& L);//初始化链表
LNode* GetElem(LinkList L, int i);//按位查找链表元素
bool InsertNextNode(LNode* p, int e);//在p后插入元素e
bool InsertPriorNode(LNode* p, int e);//在p前插入元素e
bool ListDelete(LinkList L, int i, int& e);//删除第i个元素，并返回
LNode* LocateElem(LinkList L, int e);//按值查找
int Length(LinkList L);//求表长

//双链表操作
bool iniDLinkList(DLinkList& L);//初始化链表
DNode* GetDElem(DLinkList L, int i);//按位查找链表元素
bool InsertNextDNode(DNode* p, int e);//在p后插入元素e
bool InsertPriorDNode(DNode* p, int e);//在p前插入元素e
bool DeleteDNode(DNode*& p);//删除指定结点

//静态链表操作
void iniSLinkList(SLinkList& L);//初始化链表

#endif