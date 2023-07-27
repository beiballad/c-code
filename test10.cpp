#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Dis_creat(LinkList A, LinkList &B)//将带头结点的单链表A中序号为偶数的结点分到单链表B中，并保持相对顺序不变
{
	iniLinkList(B);//初始化B
	LNode* ra = A, * p = A->next, * rb = B;//ra，rb指向A，B的表尾，p为工作指针
	int i = 0;
	A->next = NULL;
	while (p != NULL)
	{
		i++;
		if (i % 2 == 0)//判断奇偶
		{
			rb->next = p;
			rb = p;
		}
		else
		{
			ra->next = p;
			ra = p;
		}
		p = p->next;
	}
	ra->next = NULL;
	rb->next = NULL;
}