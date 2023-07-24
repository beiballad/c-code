#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"
#include "test8.h"

bool converse(int R[], int p, int n)//将数组R中的元素序列循环左移p个位置
{
	if (p >= n || p <= 0)
		return false;//判断参数是否正确
	//可看作三个逆置问题
	reverse(R, 0, n - 1, n);
	reverse(R, 0, n - p - 1, n);
	reverse(R, n - p, n - 1, n);
	return true;
}