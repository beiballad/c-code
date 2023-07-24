#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"



bool x(SqList L, int x)//在有序顺序表中查找元素x，找到则与后继交换，未找到则按顺序插入
{
	if (L.length == 0)
		return false;//判断是否为空
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
	}//二分查找
	if (L.data[m] == x && m != L.length - 1)
	{
		int value = L.data[m];
		L.data[m] = L.data[m + 1];
		L.data[m] = value;
	}//找到x且x不为最后一个元素，与后继交换
	if (L.data[m] != x)
	{
		for (int i = L.length - 1; i > l; i--)
			L.data[i + 1] = L.data[i];
		L.data[r] = x;
		L.length++;
	}//未找到，插入x
	return true;
}