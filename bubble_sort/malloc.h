#pragma once

typedef struct InitArr
{
	int* iPtr;
	int iCount;
	int iMaxCount;
}InitArr;

// ����ü �ʱ�ȭ
void InitArr1(InitArr* no1);

// �����Ҵ�
void AddArr(InitArr* _a, int data);

// ���� �����Ҵ� �� ����
//void NewArr(InitArr* _nA);

// �޸� ����
void Release(InitArr* _rArr);

// ���� ����
void BubbleSort(InitArr* _bArr);