#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include <iostream>
#include "def.h"
using namespace std;


void R_Lprint(LinkList L)//�Ӻ���ǰ�����ͷ���ĵ������ֵ
{
	if (L->next != NULL)
	{
		R_Lprint(L->next);//�ݹ���ã�L�ĺ�̲�Ϊ�գ�����L�ĺ��
		cout << L->next->data;//���L��̵�ֵ����������Ϊ�˱������ͷ���
	}
	return;
}