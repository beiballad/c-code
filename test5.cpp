#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"


bool del_s_t_2(SqList L, int s, int t)//删除s到t之间的元素
{
	if (s >= t || L.length == 0)
		return false;//判断是否为空
	int i, j=0;
	for (i = 0; i < L.length; i++)
		if (L.data[i] >= s && L.data[i] <= t)
			continue;
		else
			L.data[j++] = L.data[i];//判断表中元素是否在s到t之间，将不满足条件的元素前移
	L.length = j;
	return true;
}