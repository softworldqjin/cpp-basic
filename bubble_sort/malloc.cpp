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
	// iCount 가 iMaxCount 보다 같거나 크면 새로 동적할당
	if (_a->iCount >= _a->iMaxCount)
	{
		// 동적할당
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
		// 0번 1번 비교 > 1번 2번 비교 > 끝까지 비교
		// 앞에거가 더 클때마다 ++swap
		// swap이 0이면 break
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


