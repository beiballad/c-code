#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_min(LinkList L)//ɾ����ͷ���ĵ������е���Сֵ
{
	if (L->next == NULL)
		return false;//�п�
	LNode* p = L->next, * pre = L, * min = L->next, * minpre = L;
	while (p != NULL)
	{
		if (p->data < min->data)
		{
			min = p;
			minpre = pre;
		}
		pre = p;
		p = p->next;
	}//Ѱ����Сֵ��λ�ü���ǰ����λ��
	minpre->next = min->next;
	free(min);//ɾ����Сֵ
	return true;
}