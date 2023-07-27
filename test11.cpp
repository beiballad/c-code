#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Dis_creat_2(LinkList A, LinkList& B)//将带头结点的单链表A中序号为偶数的结点分到单链表B中，并使B中元素逆置
{
	iniLinkList(B);//初始化B
	LNode* ra = A, * p = A->next, * q;//ra指向A的表尾，p为工作指针
	while (p != NULL)
	{
		if (p->next != NULL)
			q = p->next->next;
		else
			q = NULL;
		ra = ra->next = p->next;//将A的表尾指向下一个偶位结点，移动表尾
		p->next = B->next;
		B->next = p;//将寄位结点拆下来头插入B
		p = q;
	}
}