#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Del_x(LinkList& L,int x)//�õݹ��㷨ɾ������ͷ���ĵ�������ֵΪx��Ԫ��
{
	LNode* p = L;//pָ���ɾ�����
	if (p == NULL)
		return;//��������Ϊ�գ��ݹ����
	if (p->data == x)
	{
		L = L->next;
		free(p);
		Del_x(L, x);
	}//����������������Ϊx��ɾ������ͷָ��ָ����һλ
	else
	{
		p = p->next;
		Del_x(p, x);
	}//���������������ݲ���x����p���ƣ���ָ��������ĵڶ������pΪ�������ͷָ����еݹ����
}