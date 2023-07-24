#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"

bool del_s_t(SqList L, int s, int t)//删除有序顺序表中s到t之间的元素
{
	if (s >= t || L.length == 0)
		return false;//判断是否为空
	int i,j;
	for (i = 0; i < L.length && L.data[i] < s; i++)
		if (i >= L.length)
			return true;//记录s位置，若所有元素均小于s则直接返回
	for (j = i; j < L.length && L.data[j] >= t; j++);//记录t位置
	for (; j < L.length; i++, j++)
		L.data[i] = L.data[j];//删除
	L.length = i;
	return true;
}