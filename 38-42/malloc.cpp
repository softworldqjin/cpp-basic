#include <iostream>

// 변수
// 지역(스택)
// 전역, 정적, 외부(데이터) 
//							-	컴파일 할 때 얼만큼의 메모리를 쓸지 번역됨, 
//								그래서 메모리 해제할 양도 알고있어 알아서 해제함							

// 메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역(동적할당) - runtime 중에 생성되거나 안되거나

int main()
{
	int* pInt =  (int*)malloc(100); // 힙 영역에 100byte를 생성해서, int 포인터 변수에 주소를 저장
									// malloc은 void , 주소만을 저장하기 위한, 해석 단위 없음
									// (int*) 으로 강제캐스팅해서 4byte 단위로, 그리고 pInt는 4byte씩 해석

	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;

	*pF = 2.4f;
	int i = *pI;

	// 동적 할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 관리해야함(해제)

	int ppInt;
	int* pInt = nullptr;
	scanf_s("%d", &ppInt);

	if (100 == ppInt)	// 프로그램 실행 중에 이 조건 참, 거짓에 따라 동적할당 유무 확인 가능
						// 그래서 내가 직접 이 메모리를 해제시켜야됨
	{
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt)
	{
		free(pInt);
	}



	return 0;
}