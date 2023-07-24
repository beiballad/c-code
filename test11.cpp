#define _CRT_SECURE_NO_WARNINGS 1


int search_m(int A[], int B[], int n)//求两个相同大小的有序数组A，B的中位数，n为数值大小
{
	int r1 = 0, l1 = n - 1, m1, r2 = 0, l2 = n - 1, m2;
	while (r1 < l1 || r2 < l2)
	{
		m1 = (r1 + l1) / 2;
		m2 = (r2 + l2) / 2;
		if (A[m1] == B[m2])
			return A[m1];
		else if (A[m1] < B[m2])
		{
			if ((r1 + l1) % 2)
			{
				r1 = m1;
				l2 = m2;
			}
			else
			{
				r1 = m1 + 1;
				l2 = m2;
			}//缩短选择范围，并保证下次进入循环时A，B两个数组长度相等
		}
		else
		{
			if ((r1 + l1) % 2)
			{
				l1 = m1;
				r2 = m2;
			}
			else
			{
				l1 = m1;
				r2 = m2 + 1;
			}
		}
	}//分别找两个数组中的中位数，进行比较，相等则输出，不等则进入循环
	return A[l1] < B[l2] ? A[l1] : B[l2];
}