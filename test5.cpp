#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Rverse(LinkList L)//����ͷ���ĵ�����͵�����
{
	LNode* p = L->next, * q;//��¼ͷ���ĺ��
	L->next = NULL;
	while (p != NULL)
	{
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}//��ͷ�巨���β���
	return;
}