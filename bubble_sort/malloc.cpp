#include "malloc.h"
#include <iostream>
void NewArr(InitArr* _nA);

void InitArr1(InitArr* no1)
{
	no1->iCount = 0;
	no1->iMaxCount = 2;
	no1->iPtr = (int*)malloc(sizeof(int) * 2);
}

void AddArr(InitArr* _a, int data)
{
	// iCount �� iMaxCount ���� ���ų� ũ�� ���� �����Ҵ�
	if (_a->iCount >= _a->iMaxCount)
	{
		// �����Ҵ�
		NewArr(_a);
	}
	_a->iPtr[_a->iCount++] = data;
}

void NewArr(InitArr* _nA)
{
	int* newA = (int*)malloc(_nA->iMaxCount * 2 * sizeof(int));

	for (int i = 0; i < _nA->iMaxCount; ++i)
	{
		newA[i] = _nA->iPtr[i];
	}
	free(_nA->iPtr);

	_nA->iPtr = newA;
	_nA->iMaxCount *= 2;
}

void Release(InitArr* _rArr)
{
	free(_rArr->iPtr);
	_rArr->iCount = 0;
	_rArr->iMaxCount = 2;
}

void BubbleSort(InitArr* _bArr)
{
	int temp = 0;
	int front = 0;
	int back = 0;
	
	while (true)
	{
		// 0�� 1�� �� > 1�� 2�� �� > ������ ��
		// �տ��Ű� �� Ŭ������ ++swap
		// swap�� 0�̸� break
		int count = 0;

		for (int i = 0; i < _bArr->iCount - 1; ++i)
		{
			front = _bArr->iPtr[i];
			back = _bArr->iPtr[i + 1];

			if (front > back)
			{
				temp = front;
				_bArr->iPtr[i] = back;
				_bArr->iPtr[i + 1] = temp;
				++count;
			}
		}
		if (count == 0) break;
	}
}


