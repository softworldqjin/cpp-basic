#include <stdio.h>

int main()
{
	// 1. const
	const int i = 100;

	// const 와 포인터
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const 포인터
	// const int* 가리키는 부분 상수화
	const int* pConstInt = &a;	// 포인터가 가리키는 변수 상수화
	*pConstInt;					// 접근까지는 가능.
	*pConstInt = 100;			// 가리키는 변수에 write 불가능
					  
	int b = 0;			
	pConstInt = &b;				// 포인터 변수 write 가능

	// const 포인터변수
	// const 포인터변수 상수화
	int* const pIntConst = &a;	// 포인터 상수화
	pIntConst = &a;				// 포인터 변수에 write 불가능

	*pIntConst = 200;			// 포인터가 가리키는 변수에 write 가능

	// const 포인터 const
	const int* const pConstIntConst = nullptr; // 포인터, 포인터가 가리키는 변수 모두 상수화

	// const *, * 기준으로 앞에 const, 가리키는 변수 상수화
	// * const , * 기준으로 뒤에 const, 포인터 변수 상수화
	int const* p = &a;
	*p = 100; 

	// const (상수화)한 포인터 변수로 write이 불가능한거지
	// *ptr = 100 XXXX, 다른 포인터로 write 가능
	// 또한 가리키고 있는 변수 자체가 상수가 된게 아님.
	return 0;
}

