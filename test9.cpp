#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdlib>
#include "def.h"
using namespace std;


void print_del(LinkList& head)//���������ͷ���ĵ������е�ֵ�����ͷ����н��
{
	while (head->next != NULL)
	{
		LNode* pre = head, * p = pre->next, * q = head->next;//pre��p��q�ֱ����ڱ�ʾ��Сֵǰ��������ָ�룬��Сֵ
		while (p->next != NULL)
		{
			if (p->next->data < pre->next->data)
				pre = p;
			p = p->next;
		}
		q = pre->next;
		cout << q->data;//�����Сֵ
		pre->next = q->next;
		free(q);//�ͷ���Сֵ
	}
	free(head);//�ͷ�ͷָ��
}