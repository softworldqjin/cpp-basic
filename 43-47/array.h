#pragma once

typedef struct _tabArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
}tArr;

// ctrl + '+' , '.' -> cpp���Ͽ� �Լ� ����

// �迭 �ʱ�ȭ �Լ�
void InitArr(tArr* _pArr);

// �迭 �޸� ���� �Լ�
void ReleaseArr(tArr* _pArr);

// ������ �߰� �Լ�
void PushBack(tArr* _pArr, int _iData);

// ������ ��
// 
// #include ��ó���⶧���� ���漱����־, ��밡���� �Լ���
// �ٵ� �̰� ������ �ϰ������ ������Ͽ� �߰����� �ʰ� �Լ� ���ǿ��� �����ϰ� �����
// Ư�� ������ ���� ȣ��� �Լ��� 
// 
// ���� �߰� Ȯ��
//void Reallocate(tArr* _pArr);