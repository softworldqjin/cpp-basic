#include "array.h"
#include <iostream>

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2); // int 4byte 두개 
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
	// 마지막 주소에 접근
	// 역참조해서 _iData 저장
	// iCount 1 증가 
	// iCount 값이 iMaxCount 값을 초과하면 return


	// 힙 영역에 할당한 공간이 다 참
	if (_pArr->iCount >= _pArr->iMaxCount)
	{
		// 재할당
		Reallocate(_pArr);
	}

	_pArr->pInt[_pArr->iCount++] = _iData;
}

void Reallocate(tArr* _pArr)
{	
	// 1. 2배 더 큰 공간을 동작할당
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
	
	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다. (이사가야지)
	for (int i = 0; i < _pArr->iMaxCount; ++i)
	{
		pNew[i] = _pArr->pInt[i];
	}

	// 3. 기존 공간에 있던 데이터들, 메모리 해제
	free(_pArr->pInt);

	// 4. 이제 구조체의 포인터는 새로 동적할당한 곳을 가리켜야 한다.
	_pArr->pInt = pNew;

	// 5. iMaxCount 변경된 값 적용
	_pArr->iMaxCount *= 2;
}

