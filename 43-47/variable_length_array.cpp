#include <iostream>
#include "array.h"

//int g_i = 100;
//
//typedef struct _tagST
//{
//	int iArr[g_i]; // 배열 개수를 선언할 때는 상수를 사용해야 한다.
//}ST;

int main()
{


	// 가변배열
	int a = 100;

	int iInput = 0;
	scanf_s("%d", &a);

	//int arr[a] = {};	// byte가 runtime 중에 결정되므로, 컴파일을 못함
						// 지역변수로는 가변배열을 선언 못함

	// 배열 개수를 선언할 때는 변수를 사용할 수 없다, 상수를 써야됨
	// int arr[a] = {};

	// 객체(Instance)
	// int
	// int a;

	tArr s = {};

	InitArr(&s);

	for (int i = 0; i < 10; ++i)
	{
		PushBack(&s, i);
	}

	for (int i = 0; i < s.iCount; ++i)
	{
		printf("%d\n", s.pInt[i]);
	}

	ReleaseArr(&s);

	return 0;
}

// 1. 가변배열
// 스스로 구현

// 2. 가변배열 안에 넣은 데이터 정렬
// - 버블 정렬
