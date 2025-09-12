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
		a = i;
	}
	void printA()
	{
		printf("%d\n", a);
	}
};
int main()
{
	// struct에서 선언된 변수에 언제나 접근가능함
	// class에서 접근지정자로 private public protected(상속)으로 접근 제어 가능함
	InitArr arr = {};
	InitArr1(&arr);

	AddArr(&arr, 10);
	arr.iCount = 10;

	CMy kk;

	kk.setA(3);
	kk.printA();

	return 0;
	
}