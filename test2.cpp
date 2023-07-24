#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"

void Reverse(SqList L)//ÄæÖÃÔªËØ
{
	int value;
	for (int i = 0; i <= (L.length - 1) / 2; i++)
	{
		value = L.data[i];
		L.data[i] = L.data[L.length - i - 1];
		L.data[L.length - i - 1] = value;
	}
}