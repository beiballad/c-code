#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdlib>
#include "def.h"
using namespace std;


void print_del(LinkList& head)//增次输出带头结点的单链表中的值，并释放所有结点
{
	while (head->next != NULL)
	{
		LNode* pre = head, * p = pre->next, * q = head->next;//pre，p，q分别用于表示最小值前驱，遍历指针，最小值
		while (p->next != NULL)
		{
			if (p->next->data < pre->next->data)
				pre = p;
			p = p->next;
		}
		q = pre->next;
		cout << q->data;//输出最小值
		pre->next = q->next;
		free(q);//释放最小值
	}
	free(head);//释放头指针
}