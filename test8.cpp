#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


LNode* Search_commen(LinkList L1, LinkList L2)//寻找两带头结点的单链表的公共结点
//经分析易得，两链表若有公告结点，则其拓扑结构为Y，即自首个公共结点以后均为公共结点
{
	if (L1->next == NULL || L2->next == NULL)
		return NULL;//判空，若两链表有一个为空，则直接返回NULL，减少运算
	LNode* p[2] = { L1->next,L2->next };
	int l[2] = { 0 };
	for (int i = 0; i < 2; i++)
		l[i] = Length(p[i]);//求长度
	int n = l[0] - l[1];
	if (n > 0)
		for (; n > 0; n--)
			p[0] = p[0]->next;
	else
		for (; n < 0; n++)
			p[1] = p[1]->next;//此条件判断语句用于使p[0]和p[1]之后的元素个数相等
	while (true)
		if (p[0] == p[1])
			return p[0];//返回首个公共结点，若没有公共结点，也能返回NULL
		else
		{
			p[0] = p[0]->next;
			p[1] = p[1]->next;
		}
}