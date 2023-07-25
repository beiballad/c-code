#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


//单链表操作
bool iniLinkList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

LNode* GetElem(LinkList L, int i)
{
	if (i < 0)
		return NULL;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

bool InsertNextNode(LNode* p, int e)
{
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool InsertPriorNode(LNode* p, int e)
{
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
		return false;
	s->next = p->next;
	s->data = p->data;
	p->data = e;
	p->next = s;
	return true;
}

bool ListDelete(LinkList L, int i, int& e)
{
	if (i < 0)
		return false;
	LNode* p = GetElem(L, i - 1);
	if (p == NULL || p->next == NULL)
		return false;
	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}

LNode* LocateElem(LinkList L, int e)
{
	LNode* p = L->next;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}

int Length(LinkList L)
{
	int len = 0;
	LNode* p = L;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}

//双链表操作
bool iniDLinkList(DLinkList& L)
{
	if ((L = (DNode*)malloc(sizeof(DNode))) == NULL)
		return false;
	L->prior = NULL;
	L->next = NULL;
	return true;
}

DNode* GetDElem(DLinkList L, int i)
{
	if (i < 0)
		return NULL;
	DNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

bool InsertNextDNode(DNode* p, int e)
{
	if (p == NULL)
		return false;
	DNode* s = (DNode*)malloc(sizeof(DNode));
	if (s == NULL)
		return false;
	s->data = e;
	s->next = p->next;
	if (p->next != NULL)
		p->next->prior = s;
	p->next = s;
	s->prior = p;
	return true;
}

bool InsertPriorDNode(DNode* p, int e)
{
	if (p == NULL)
		return false;
	DNode* s = (DNode*)malloc(sizeof(DNode));
	if (s == NULL)
		return false;
	s->data = e;
	s->prior = p->prior;
	p->prior->next = s;
	p->prior = s;
	s->next = p;
	return true;
}

bool DeleteDNode(DNode*& p)
{
	if (p == NULL)
		return false;
	p->prior->next = p->next;
	if (p->next != NULL)
		p->next->prior = p->prior;
	free(p);
	return true;
}

void iniSLinkList(SLinkList& L)
{
	L[0].next = -1;
	for (int i = 1; i < MAXSIZE; i++)
		L[i].next = -2;
}