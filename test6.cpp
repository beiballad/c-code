#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdlib>
#include "def.h"


bool sort(LinkList L)
{
	if (L->next == NULL)
		return false;
	LNode* p = L->next, * pre = L, * q = p->next, * qnext = q->next;
	p->next = NULL;
	while (q != NULL)
	{
		qnext = q->next;
		pre = L;
		p = L->next;
		while (p != NULL)
			if (p->data < q->data)
			{
				pre = p;
				p = p->next;
			}
			else
			{
				pre->next = q;
				q->next = p;
				q = qnext;
				break;
			}
	}
	return true;
}