#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


LNode* Search_commen(LinkList L1, LinkList L2)//Ѱ������ͷ���ĵ�����Ĺ������
//�������׵ã����������й����㣬�������˽ṹΪY�������׸���������Ժ��Ϊ�������
{
	if (L1->next == NULL || L2->next == NULL)
		return NULL;//�пգ�����������һ��Ϊ�գ���ֱ�ӷ���NULL����������
	LNode* p[2] = { L1->next,L2->next };
	int l[2] = { 0 };
	for (int i = 0; i < 2; i++)
		l[i] = Length(p[i]);//�󳤶�
	int n = l[0] - l[1];
	if (n > 0)
		for (; n > 0; n--)
			p[0] = p[0]->next;
	else
		for (; n < 0; n++)
			p[1] = p[1]->next;//�������ж��������ʹp[0]��p[1]֮���Ԫ�ظ������
	while (true)
		if (p[0] == p[1])
			return p[0];//�����׸�������㣬��û�й�����㣬Ҳ�ܷ���NULL
		else
		{
			p[0] = p[0]->next;
			p[1] = p[1]->next;
		}
}