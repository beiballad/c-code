#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"

bool del_s_t(SqList L, int s, int t)//ɾ������˳�����s��t֮���Ԫ��
{
	if (s >= t || L.length == 0)
		return false;//�ж��Ƿ�Ϊ��
	int i,j;
	for (i = 0; i < L.length && L.data[i] < s; i++)
		if (i >= L.length)
			return true;//��¼sλ�ã�������Ԫ�ؾ�С��s��ֱ�ӷ���
	for (j = i; j < L.length && L.data[j] >= t; j++);//��¼tλ��
	for (; j < L.length; i++, j++)
		L.data[i] = L.data[j];//ɾ��
	L.length = i;
	return true;
}