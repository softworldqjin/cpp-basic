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

// Linked list 초기화
void InitList(tLinkedList* _pList);

// Linked list 뒤로 data 추가 (queue)
void PushBack(tLinkedList* _pList, int _iData);

// Linked list 해제
void Release(tLinkedList* _pList);

// Linked list 앞부터 data 추가 (stack)
void PushFront(tLinkedList* _pList, int _iData);