#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Del_x_2(LinkList L, int x)//ɾ����ͷ���ĵ�������ֵΪx��Ԫ��
{
	LNode* p = L->next, * pre = L, * q;//����ָ��p��pre�ֱ�ָ��ǰ����ǰһ��㣬q���ڱ���ֵΪx����λ��
	while (p != NULL)
	{
		if (p->data == x)//pֵΪx
		{
			q = p;//��¼p��ָ���
			p = p->next;//��pָ�����
			pre->next = p;
			free(q);//ɾ��ֵΪx�Ľ��
		}
		else
		{
			pre = p;
			p = p->next;//����p��pre
		}
	}
}