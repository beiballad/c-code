#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"
#include "test8.h"

bool converse(int R[], int p, int n)//������R�е�Ԫ������ѭ������p��λ��
{
	if (p >= n || p <= 0)
		return false;//�жϲ����Ƿ���ȷ
	//�ɿ���������������
	reverse(R, 0, n - 1, n);
	reverse(R, 0, n - p - 1, n);
	reverse(R, n - p, n - 1, n);
	return true;
}