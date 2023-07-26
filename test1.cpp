#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Del_x(LinkList& L,int x)//用递归算法删除不带头结点的单链表中值为x的元素
{
	LNode* p = L;//p指向待删除结点
	if (p == NULL)
		return;//传入链表为空，递归结束
	if (p->data == x)
	{
		L = L->next;
		free(p);
		Del_x(L, x);
	}//传入链表首项数据为x，删除并将头指针指向下一位
	else
	{
		p = p->next;
		Del_x(p, x);
	}//传入链表首项数据不是x，将p后移，即指向传入链表的第二项，并以p为新链表的头指针进行递归调用
}