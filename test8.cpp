#define _CRT_SECURE_NO_WARNINGS 1

#include "def.h"

bool reverse(int A[], int r, int l, int size)//逆置数组A中下标r到l的所有元素
{
	if (r >= l || l >= size)
		return false;//判断参数是否正确
	int m = (r + l) / 2, value;
	for (int i = r; i <= m; i++)
	{
		value = A[i];
		A[i] = A[l - i + r];
		A[l - i + r] = value;
	}
	return true;
}

bool exchange(int A[], int m, int n, int size)//将数值A[m+n]中前m个数和后n个数互换
{
	if (m + n > size)
		return false;
	reverse(A, 0, m + n - 1, size);
	reverse(A, 0, n - 1, size);
	reverse(A, n, m + n - 1, size);
	return true;
}