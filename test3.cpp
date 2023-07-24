#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"

void del_x(SqList L, int x)//É¾³ýÔªËØx
{
	int k = 0, i;
	for (i = 0; i < L.length; i++)
		if (L.data[i] != x)
			L.data[k++] = L.data[i];
	L.length = k;
}