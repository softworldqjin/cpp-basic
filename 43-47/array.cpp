#include "array.h"
#include <iostream>

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2); // int 4byte �ΰ� 
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}

void ReleaseArr(tArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}

void PushBack(tArr* _pArr, int _iData)
{
	// ������ �ּҿ� ����
	// �������ؼ� _iData ����
	// iCount 1 ���� 
	// iCount ���� iMaxCount ���� �ʰ��ϸ� return


	// �� ������ �Ҵ��� ������ �� ��
	if (_pArr->iCount >= _pArr->iMaxCount)
	{
		// ���Ҵ�
		Reallocate(_pArr);
	}

	_pArr->pInt[_pArr->iCount++] = _iData;
}

void Reallocate(tArr* _pArr)
{	
	// 1. 2�� �� ū ������ �����Ҵ�
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
	
	// 2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��. (�̻簡����)
	for (int i = 0; i < _pArr->iMaxCount; ++i)
	{
		pNew[i] = _pArr->pInt[i];
	}

	// 3. ���� ������ �ִ� �����͵�, �޸� ����
	free(_pArr->pInt);

	// 4. ���� ����ü�� �����ʹ� ���� �����Ҵ��� ���� �����Ѿ� �Ѵ�.
	_pArr->pInt = pNew;

	// 5. iMaxCount ����� �� ����
	_pArr->iMaxCount *= 2;
}

