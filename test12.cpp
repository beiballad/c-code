#define _CRT_SECURE_NO_WARNINGS 1


int majority(int A[], int n)//������A�е���Ԫ�أ�û���򷵻�-1
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
	}//�ҳ���Ԫ�غ�ѡ
	if (cout > 0)
		for (i = 0, cout = 0; i < n; i++)
			if (m == A[i])
				cout++;//�����ѡ��Ԫ�صĸ���
	if (cout > n / 2)
		return m;
	else
		return -1;//�ж����Ƿ�Ϊ��Ԫ��
}