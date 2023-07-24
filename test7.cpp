#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"



bool merge(SqList A, SqList B, SqList& C)//将两个有序顺序表拼接
{
	if (A.length == 0 || B.length == 0)
		return false;//判断是否为空
	int i, j, k=0;
	for (i = 0, j = 0; i < A.length && j < B.length;)
		if (A.data[i] <= B.data[j])
			C.data[k++] = A.data[i++];
		else
			C.data[k++] = B.data[j++];
	while (i < A.length)
		C.data[k++] = A.data[i++];
	while (j < B.length)
		C.data[k++] = B.data[j++];
	C.length = k;
	return true;
}