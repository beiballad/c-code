#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool Del_same(LinkList L)//ɾ����ͷ���������������ظ�Ԫ��
{
	if (L->next == NULL)
		return false;//�п�
	LNode* pre = L->next, * p = pre->next;
	while (pre->next != NULL)
	{
		p = pre->next;
		if (pre->data == p->data)
		{
			pre->next = p->next;
			free(p);
		}
		else
			pre = p;
	}
	return true;
}