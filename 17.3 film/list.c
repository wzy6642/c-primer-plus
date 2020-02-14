#include <stdio.h>
#include <stdlib.h>
#include "list.h"
//�ֲ�����ԭ��
static void CopyToNode (Item item, Node * pnode);
//�ӿں���
//���б�����Ϊ���б�
void InitializeList (List * plist)
{
	* plist = NULL;
}
//����б�Ϊ���򷵻���
bool ListIsEmpty(const List * plist) 
{
	if(* plist == NULL)
		return true;
	else
		return false;
} 
//����б������򷵻���
bool ListIsFull(const List * plist)
{
	Node * pt;
	bool full;
	pt = (Node *) malloc (sizeof (Node));
	if(pt == NULL)
		full = true;
	else
		full = false;
	free(pt);
	return full;
} 
//���ؽڵ���
unsigned int ListItemCount(const List * plist)
{
	unsigned int count = 0;
	Node * pnode = *plist;
	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;	//��һ����Ϊ��һ���ڵ� 
	}
	return count;
} 
//���������Ŀ�Ľڵ㣬���������ӵ�
//��plistָ����б���������ʵ�ַ�����β��
bool AddItem(Item item, List * plist) 
{
	Node * pnew;
	Node * scan = *plist;
	pnew = (Node *)malloc(sizeof(Node));
	if(pnew == NULL)
		return false;
	CopyToNode(item, pnew);
	pnew->next = NULL;
	if(scan == NULL)
	* plist = pnew;
	else
	{
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = pnew;
	}
	return true;
}
//����ÿ���ڵ㲢�����Ƿֱ�ִ����pfunָ��ĺ���
void Traverse (const List * plist, void (* pfun)(Item item))
{
	Node * pnode = *plist;
	while(pnode != NULL)
	{
		(* pfun)(pnode->item);
		pnode = pnode->next;
	}
} 
//�ͷ���malloc����������ڴ�
//���б�ָ������ΪNULL
void EmptyTheList (List * plist)
{
	Node * psave;
	while (*plist != NULL)
	{
		psave = (*plist)->next;
		free (*plist);
		*plist = psave;
	}
} 
//�ֲ���������
//��һ����Ŀ���Ƶ�һ���ڵ���
static void CopyToNode(Item item, Node * pnode)
{
	pnode->item = item;
} 