#define _CRT_SECURE_NO_WARNINGS 1
#include "def.h"


bool DEL_MIN(SqList &L, int &value)//删除唯一最小值并返回
{
	if (L.length == 0)
		return false;//判断是否为空
	int i, pos=0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] < L.data[pos])
			pos = i;
	}//记录最小值位置
	value = L.data[pos];
	L.data[pos] = L.data[L.length - 1];//删除并用最后一位替代
	L.length--;
	return true;
}