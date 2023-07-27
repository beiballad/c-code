#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_range(LinkList L, int a, int b)//删除带头结点的单链表中值在a，b之间的数
{
	if (L->next == NULL || a >= b)
		return false;//判空，直接返回
	LNode* p = L->next, * pre = L, * q;//p指向检查结点，pre指向其前驱，q复杂记录符合条件的p值
	while (p != NULL)
		if (p->data > a && p->data < b)
		{
			q = p;
			pre->next = p->next;
			p = p->next;
			free(q);
		}//在a，b之间，删除
		else
		{
			pre = p;
			p = p->next;
		}//不在a，b之间，向后移一位
	return true;
}