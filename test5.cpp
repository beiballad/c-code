#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"


bool del_s_t_2(SqList L, int s, int t)//ɾ��s��t֮���Ԫ��
{
	if (s >= t || L.length == 0)
		return false;//�ж��Ƿ�Ϊ��
	int i, j=0;
	for (i = 0; i < L.length; i++)
		if (L.data[i] >= s && L.data[i] <= t)
			continue;
		else
			L.data[j++] = L.data[i];//�жϱ���Ԫ���Ƿ���s��t֮�䣬��������������Ԫ��ǰ��
	L.length = j;
	return true;
}