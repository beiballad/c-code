#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"



void del_same(SqList L)//ɾ������˳����е��ظ�Ԫ��
{
	int i, j;
	for (i = 0, j = 1; i < L.length; j++)
		if (L.data[i] != L.data[j])
			L.data[++i] = L.data[j];
	L.length = i + 1;
}