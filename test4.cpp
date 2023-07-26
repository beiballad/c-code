#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_min(LinkList L)//删除带头结点的单链表中的最小值
{
	if (L->next == NULL)
		return false;//判空
	LNode* p = L->next, * pre = L, * min = L->next, * minpre = L;
	while (p != NULL)
	{
		if (p->data < min->data)
		{
			min = p;
			minpre = pre;
		}
		pre = p;
		p = p->next;
	}//寻找最小值的位置及其前驱的位置
	minpre->next = min->next;
	free(min);//删除最小值
	return true;
}