#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


void Dis_creat_2(LinkList A, LinkList& B)//����ͷ���ĵ�����A�����Ϊż���Ľ��ֵ�������B�У���ʹB��Ԫ������
{
	iniLinkList(B);//��ʼ��B
	LNode* ra = A, * p = A->next, * q;//raָ��A�ı�β��pΪ����ָ��
	while (p != NULL)
	{
		if (p->next != NULL)
			q = p->next->next;
		else
			q = NULL;
		ra = ra->next = p->next;//��A�ı�βָ����һ��żλ��㣬�ƶ���β
		p->next = B->next;
		B->next = p;//����λ��������ͷ����B
		p = q;
	}
}