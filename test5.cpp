#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Rverse(LinkList L)//将带头结点的单链表就地逆置
{
	LNode* p = L->next, * q;//记录头结点的后继
	L->next = NULL;
	while (p != NULL)
	{
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}//用头插法依次插入
	return;
}