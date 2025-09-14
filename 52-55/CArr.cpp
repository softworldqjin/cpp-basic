#include "CArr.h"
#include <assert.h>

CArr::CArr()
: m_pInt(nullptr)
, m_iCount(0)
, m_iMaxCount(0)

{
	m_pInt = new int[2];	// �����Ҵ�, C ������ (int*)malloc(sizeof(int)* ?) 
}

CArr::~CArr()
{
	delete[] m_pInt;

	// *int* p = new int[2];
	// delete p; 
}

void CArr::PushBack(int Data)
{
	if (m_iMaxCount <= m_iCount) // this-> �� ������ �׻�
	{
		// ���� �����Ҵ� �� ���� �ϰ� ���� �����Ҵ� ����
		Resize(m_iMaxCount * 2);
	}
	m_pInt[m_iCount++] = Data;
}

void CArr::Resize(int _iCount)	// �̸� ������ ū ������ Resize�ϴ� ��찡 ����, 
								// �Ź� ������ �����ϰ� �����,, �̷� ������ �ݺ��ؾߵǼ�
{
	if (m_iMaxCount >= _iCount) // ��ü.Resize(3�Ǵ� 1, 2) �̷��� ���� 3�̻� �ִ� �迭�� ��ҶǴ� �����ϴµ�
								// �׷��Ÿ� �Լ� �־�? -> ��� �߻� 
	{
		assert(nullptr);
	}

	// ���� �����Ҵ�
	int* newP = new int[_iCount];

	// ���� �����Ҵ� ���ִ� �����͸� ���� �����Ҵ�� �����ͷ� �ű��
	for (int i = 0; i < _iCount; i++)
	{
		newP[i] = m_pInt[i];
	}

	// ���� �����Ҵ� ����
	delete[] m_pInt;

	// �����Ͱ��� ���� �����Ҵ�� �ּҷ� ����
	m_pInt = newP;

	// iMaxCount ����
	m_iMaxCount = _iCount;

}

int& CArr::operator[](int i)
{
	return m_pInt[i];
}
