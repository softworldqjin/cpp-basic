#pragma once

typedef struct _tagNode
{
	int iData;
	struct _tagNode* pNextNode;
}tNode;

typedef struct _tagList
{
	tNode* pHeadNode;
	int iCount;

}tLinkedList;

// Linked list �ʱ�ȭ
void InitList(tLinkedList* _pList);

// Linked list �ڷ� data �߰� (queue)
void PushBack(tLinkedList* _pList, int _iData);

// Linked list ����
void Release(tLinkedList* _pList);

// Linked list �պ��� data �߰� (stack)
void PushFront(tLinkedList* _pList, int _iData);