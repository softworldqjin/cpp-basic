#include "CArr.h"
#include <assert.h>

CArr::CArr()
: m_pInt(nullptr)
, m_iCount(0)
, m_iMaxCount(0)

{
	m_pInt = new int[2];	// 동적할당, C 였으면 (int*)malloc(sizeof(int)* ?) 
}

CArr::~CArr()
{
	delete[] m_pInt;

	// *int* p = new int[2];
	// delete p; 
}

void CArr::PushBack(int Data)
{
	if (m_iMaxCount <= m_iCount) // this-> 가 생략됨 항상
	{
		// 새로 동적할당 후 복붙 하고 원래 동적할당 제거
		Resize(m_iMaxCount * 2);
	}
	m_pInt[m_iCount++] = Data;
}

void CArr::Resize(int _iCount)	// 미리 적당히 큰 범위로 Resize하는 경우가 많다, 
								// 매번 꽉차면 복붙하고 지우고,, 이런 과정을 반복해야되서
{
	if (m_iMaxCount >= _iCount) // 객체.Resize(3또는 1, 2) 이러면 원래 3이상 있던 배열을 축소또는 유지하는데
								// 그럴거면 함수 왜씀? -> 경고 발생 
	{
		assert(nullptr);
	}

	// 새로 동적할당
	int* newP = new int[_iCount];

	// 원래 동적할당 되있던 데이터를 새로 동적할당된 데이터로 옮기기
	for (int i = 0; i < _iCount; i++)
	{
		newP[i] = m_pInt[i];
	}

	// 원래 동적할당 해제
	delete[] m_pInt;

	// 포인터값을 새로 동적할당된 주소로 저장
	m_pInt = newP;

	// iMaxCount 변경
	m_iMaxCount = _iCount;

}

int& CArr::operator[](int i)
{
	return m_pInt[i];
}
