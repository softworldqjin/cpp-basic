#include "CArr.h"

class CTest
{
private:
	int a;

public:
	CTest()
		: a(10)
	{

	}
};

int main()
{
	// 구조체 --> 클래스

	// 객체지향 언어 특징
	// 1. 캡슐화
	// 기능을 수행하기 위해 필요한 멤버 선언, 묶음, 은닉성
	// 멤버 함수들

	// 2. 상속

	// 3. 다형성

	// 4. 추상화

	// 구조체 버전 가변배열 -> 클래스 버전

	// C++ 동적할당 new, delete
	CTest* pTest = new CTest;	// heap에 동적할당하고, 자료형 CTest로 4byte확보하고
								// 멤버변수 초기화해서 주소 반환해줌.
								// CTest 포인터로 받는 이유? CTest자료형으로 확보된 곳을, 4byte 단위 해석하기 위해
								
								// malloc 으로 했으면 ,, 상수값을 byte로 확보하고 주소 반환
	delete pTest;

	// CArr 예시
	CArr _a;
	_a.PushBack(3);
	_a.PushBack(4);
	_a.PushBack(5);

	//int iData = _a[1];

	int iData = _a[1];
	_a[1] = 100;

	return 0;
}