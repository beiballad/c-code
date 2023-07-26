#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Del_x_2(LinkList L, int x)//删除带头结点的单链表中值为x的元素
{
	LNode* p = L->next, * pre = L, * q;//设置指针p，pre分别指向当前结点和前一结点，q用于保存值为x结点的位置
	while (p != NULL)
	{
		if (p->data == x)//p值为x
		{
			q = p;//记录p所指结点
			p = p->next;//将p指向后移
			pre->next = p;
			free(q);//删除值为x的结点
		}
		else
		{
			pre = p;
			p = p->next;//后移p和pre
		}
	}
}