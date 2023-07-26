#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include <iostream>
#include "def.h"
using namespace std;


void R_Lprint(LinkList L)//从后往前输出带头结点的单链表的值
{
	if (L->next != NULL)
	{
		R_Lprint(L->next);//递归调用，L的后继不为空，传入L的后继
		cout << L->next->data;//输出L后继的值，这样做是为了避免输出头结点
	}
	return;
}