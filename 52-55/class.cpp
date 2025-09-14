#include <iostream>
#include "malloc.h"
struct tMy
{

};

class CMy
{			// 생성자, 소멸자는 꼭 있어야 된다.
			// 만약 생성자, 소멸자를 게시하지 않으면 자동으로 생성된다.
			// (아무기능 없는 생성자, 소멸자를)

public:		// 기본 접근 지정자는 private이다.
			// public 지정안해주면 class로 객체 못만듦

	CMy()	// 생성자
		: a(10)
		, b(3.1)
	{
	}	// CMy a; -> class로 객체(instance)가 생성될 때 자동으로 호출됨

	~CMy()	// 소멸자, main함수 종료되기 전에 class 소멸자 호출됨
	{

	}


private:
	int a;				// 멤버
	float b;

public:
						
	void setA(int i)	// 멤버함수, 객체.함수() 로 호출 가능
	{
		a = i;			// void setA(CMy* this, int i) 로 this포인터에 주소전달받아서, this->a = i; 이렇게,,  사실 생략된거임
	}
	void printA()
	{
		printf("%d\n", a);
	}

	// 대입 연산자
	CMy& operator =(const CMy& _other) // CMy& , 레퍼런스 반환
	{
		a = _other.a;
		b = _other.b;

		return *this;	// 원본 객체 반환, obj1 = obj2 = obj3 -> obj1 = 반환값 가능하도록
	}
};
int main()
{
	// C++ 클래스 특징
	// 접근제한 지정자
	// 클래스 내의 멤버변수 or 멤버함수 의 접근 레벨
	
	// 생성자, 소멸자
	// 객체 생성 and 소멸 시 자동으로 호출
	// 직접 만들지 않으면, 기본 생성자 and 기본 소멸자가 만들어짐
	
	// 멤버함수
	// 해당 클래스가 사용하는 전용 함수
	// 해당 클래스의 객체가 필요함
	// 멤버함수를 객체를 통해서 호출하면, 해당 객체의 주소 this 포인터로 전달된다.
	 
	// struct에서 선언된 변수에 언제나 접근가능함
	// class에서 접근지정자로 private public protected(상속)으로 접근 제어 가능함

	
	InitArr arr = {};
	InitArr1(&arr);

	AddArr(&arr, 10);
	arr.iCount = 10;

	CMy kk;

	kk.setA(3);
	kk.printA();

	{
		// 레퍼런스
		// 자료형 * 변수명;	포인터 변수 선언
		// *포인터변수;		포인터 주소 역참조
		// &변수				변수의 주소값
		// 자료형 & 변수명;	레퍼런스 변수 선언

		// C++ 에 추가된 기능
		// 포인터와 유사
		// 원본을 참조한다.
		// 참조변수를 통해서 직접적으로 원본을 수정할 수 있다.

		int a = 10;
		
		int* const p = &a;
		*p = 100;

		int& iRef = a;
		iRef = 1000;

		const int* p2 = &a;
		// *p2 = 10, write 불가능

		const int& iRefConst = a;
		// iRefConst = 10, write 불가능

	}
	return 0;
	
}