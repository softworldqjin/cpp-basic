#include <iostream>

#include "LinkedList.h"

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLinkedList* _pList, int _iData)
{
	// �����͸� ������ ��� ����
	tNode* pNode = (tNode*)malloc(sizeof(tNode));
	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	// �߰��� �����Ͱ� ó������ �ƴ���
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{

		tNode* pCurrentNode = _pList->pHeadNode;

		while (true)
		{
			if (nullptr == pCurrentNode->pNextNode)
			{
				break;
			}
			pCurrentNode = pCurrentNode->pNextNode;
		}
		pCurrentNode->pNextNode = pNode;
	}
	++_pList->iCount;

}

void Release(tLinkedList* _pList)
{
	tNode* pCurrentNode = _pList->pHeadNode;
	tNode* pNextNode = nullptr;

	while (nullptr != pCurrentNode)
	{
		pNextNode = pCurrentNode->pNextNode;
		free(pCurrentNode);
		pCurrentNode = pNextNode;
	}
	_pList->iCount = 0;
	_pList->pHeadNode = nullptr;
}

void PushFront(tLinkedList* _pList, int _iData)
{
	tNode* newNode = (tNode*)malloc(sizeof(tNode));
	newNode->pNextNode = nullptr;
	newNode->iData = _iData;
	
	newNode->pNextNode = _pList->pHeadNode;
	_pList->pHeadNode = newNode;
}
