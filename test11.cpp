#define _CRT_SECURE_NO_WARNINGS 1


int search_m(int A[], int B[], int n)//��������ͬ��С����������A��B����λ����nΪ��ֵ��С
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
			}//����ѡ��Χ������֤�´ν���ѭ��ʱA��B�������鳤�����
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
	}//�ֱ������������е���λ�������бȽϣ��������������������ѭ��
	return A[l1] < B[l2] ? A[l1] : B[l2];
}