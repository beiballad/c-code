#define _CRT_SECURE_NO_WARNINGS 1


int majority(int A[], int n)//求数组A中的主元素，没有则返回-1
{
	int m, cout = 1, i;
	m = A[0];
	for (i = 1; i < n; i++)
	{
		if (m == A[i])
			cout++;
		else if (cout > 0)
			cout--;
		else
		{
			m = A[i];
			cout = 1;
		}
	}//找出主元素候选
	if (cout > 0)
		for (i = 0, cout = 0; i < n; i++)
			if (m == A[i])
				cout++;//求其候选主元素的个数
	if (cout > n / 2)
		return m;
	else
		return -1;//判断其是否为主元素
}