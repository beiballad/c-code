#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"



bool x(SqList L, int x)//������˳����в���Ԫ��x���ҵ������̽�����δ�ҵ���˳�����
{
	if (L.length == 0)
		return false;//�ж��Ƿ�Ϊ��
	int r = 0, l = L.length - 1, m;
	while (r <= l)
	{
		m = (r + l) / 2;
		if (L.data[m] == x)
			break;
		else if (L.data[m] > x)
			l = m - 1;
		else
			r = m + 1;
	}//���ֲ���
	if (L.data[m] == x && m != L.length - 1)
	{
		int value = L.data[m];
		L.data[m] = L.data[m + 1];
		L.data[m] = value;
	}//�ҵ�x��x��Ϊ���һ��Ԫ�أ����̽���
	if (L.data[m] != x)
	{
		for (int i = L.length - 1; i > l; i--)
			L.data[i + 1] = L.data[i];
		L.data[r] = x;
		L.length++;
	}//δ�ҵ�������x
	return true;
}