#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"



void del_same(SqList L)//删除有序顺序表中的重复元素
{
	int i, j;
	for (i = 0, j = 1; i < L.length; j++)
		if (L.data[i] != L.data[j])
			L.data[++i] = L.data[j];
	L.length = i + 1;
}