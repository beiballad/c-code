#define _CRT_SECURE_NO_WARNINGS 1
#include "def.h"


bool DEL_MIN(SqList &L, int &value)//ɾ��Ψһ��Сֵ������
{
	if (L.length == 0)
		return false;//�ж��Ƿ�Ϊ��
	int i, pos=0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] < L.data[pos])
			pos = i;
	}//��¼��Сֵλ��
	value = L.data[pos];
	L.data[pos] = L.data[L.length - 1];//ɾ���������һλ���
	L.length--;
	return true;
}