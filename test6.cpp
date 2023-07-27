#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool sort(LinkList L)//使带头结点的单链表递增有序
{
	if (L->next == NULL)
		return false;//判空，直接返回
	LNode* p = L->next, * pre = L, * q = p->next, * qnext = q->next;
	p->next = NULL;//将首项的后继指向空指针，以构成只有一个元素的有序链表
	while (q != NULL)
	{
		qnext = q->next;
		pre = L;
		p = L->next;
		while (p != NULL)
			if (p->data < q->data)
			{
				pre = p;
				p = p->next;
			}
			else
			{
				pre->next = q;
				q->next = p;
				q = qnext;
				break;
			}//插入排序法
	}
	return true;
}
