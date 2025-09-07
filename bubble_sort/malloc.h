#pragma once

typedef struct InitArr
{
	int* iPtr;
	int iCount;
	int iMaxCount;
}InitArr;

// 구조체 초기화
void InitArr1(InitArr* no1);

// 동적할당
void AddArr(InitArr* _a, int data);

// 새로 동적할당 후 복사
//void NewArr(InitArr* _nA);

// 메모리 해제
void Release(InitArr* _rArr);

// 버블 정렬
void BubbleSort(InitArr* _bArr);