#pragma once
#ifndef _DEF_H_
#define _DEF_H_

#define MAXSIZE 10

typedef struct LNode
{
	int data;
	LNode* next;
}*LinkList;//������

typedef struct DNode
{
	int data;
	DNode* prior, * next;
}*DLinkList;//˫����

typedef struct
{
	int data;
	int next;
}SLinkList[MAXSIZE];//��̬����

//���������
bool iniLinkList(LinkList& L);//��ʼ������
LNode* GetElem(LinkList L, int i);//��λ��������Ԫ��
bool InsertNextNode(LNode* p, int e);//��p�����Ԫ��e
bool InsertPriorNode(LNode* p, int e);//��pǰ����Ԫ��e
bool ListDelete(LinkList L, int i, int& e);//ɾ����i��Ԫ�أ�������
LNode* LocateElem(LinkList L, int e);//��ֵ����
int Length(LinkList L);//���

//˫�������
bool iniDLinkList(DLinkList& L);//��ʼ������
DNode* GetDElem(DLinkList L, int i);//��λ��������Ԫ��
bool InsertNextDNode(DNode* p, int e);//��p�����Ԫ��e
bool InsertPriorDNode(DNode* p, int e);//��pǰ����Ԫ��e
bool DeleteDNode(DNode*& p);//ɾ��ָ�����

//��̬�������
void iniSLinkList(SLinkList& L);//��ʼ������

#endif