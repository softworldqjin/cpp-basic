#pragma once

typedef struct _tabArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
}tArr;

// ctrl + '+' , '.' -> cpp파일에 함수 정의

// 배열 초기화 함수
void InitArr(tArr* _pArr);

// 배열 메모리 해제 함수
void ReleaseArr(tArr* _pArr);

// 데이터 추가 함수
void PushBack(tArr* _pArr, int _iData);

// 삭제할 것
// 
// #include 전처리기때문에 전방선언되있어서, 사용가능한 함수임
// 근데 이거 못쓰게 하고싶으면 헤더파일에 추가하지 않고 함수 정의에만 존재하게 만들기
// 특정 조건일 때만 호출될 함수임 
// 
// 공간 추가 확장
//void Reallocate(tArr* _pArr);