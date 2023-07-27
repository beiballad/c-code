#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_same(LinkList L)//删除带头结点的有序单链表中重复元素
{
	if (L->next == NULL)
		return false;//判空
	LNode* pre = L->next, * p = pre->next;
	while (pre->next != NULL)
	{
		p = pre->next;
		if (pre->data == p->data)
		{
			pre->next = p->next;
			free(p);
		}
		else
			pre = p;
	}
	return true;
}