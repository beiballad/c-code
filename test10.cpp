#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Dis_creat(LinkList A, LinkList &B)//����ͷ���ĵ�����A�����Ϊż���Ľ��ֵ�������B�У����������˳�򲻱�
{
	iniLinkList(B);//��ʼ��B
	LNode* ra = A, * p = A->next, * rb = B;//ra��rbָ��A��B�ı�β��pΪ����ָ��
	int i = 0;
	A->next = NULL;
	while (p != NULL)
	{
		i++;
		if (i % 2 == 0)//�ж���ż
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