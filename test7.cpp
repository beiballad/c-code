#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_range(LinkList L, int a, int b)//ɾ����ͷ���ĵ�������ֵ��a��b֮�����
{
	if (L->next == NULL || a >= b)
		return false;//�пգ�ֱ�ӷ���
	LNode* p = L->next, * pre = L, * q;//pָ�����㣬preָ����ǰ����q���Ӽ�¼����������pֵ
	while (p != NULL)
		if (p->data > a && p->data < b)
		{
			q = p;
			pre->next = p->next;
			p = p->next;
			free(q);
		}//��a��b֮�䣬ɾ��
		else
		{
			pre = p;
			p = p->next;
		}//����a��b֮�䣬�����һλ
	return true;
}