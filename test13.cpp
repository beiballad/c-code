#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>

int missed_min(int A[], int n)//求数组A中未出现的最小正整数
{
	int i, * B = NULL;
	B = (int*)malloc(sizeof(int) * n);
	if (B != NULL)
		memset(B, 0, sizeof(int) * n);
	else
		return -1;
	for (i = 0; i < n; i++)
		if (A[i] > 0 && A[i] <= n)
			B[A[i] - 1] == 1;
	for (i = 0; i < n;)
		if (B[i++] == 1)
			break;
	return i;
}